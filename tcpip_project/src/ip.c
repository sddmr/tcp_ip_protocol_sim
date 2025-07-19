#include "ip.h"
#include "checksum.h"
#include <string.h>
#include <arpa/inet.h>


void ip_init_header(ip_header_t* header, uint32_t src, uint32_t dst, uint16_t data_len) {
    memset(header, 0, sizeof(ip_header_t));
    header->version = 4;       // IPv4
    header->ihl = 5;           // Header length (5 x 4 = 20 bytes)
    header->total_length = htons(sizeof(ip_header_t) + data_len);
    header->ttl = 64;
    header->protocol = 6;      // TCP protocol number
    header->source_ip = htonl(src);
    header->dest_ip = htonl(dst);
    header->header_checksum = 0;
    header->header_checksum = checksum(header, sizeof(ip_header_t));
}

void ip_calculate_checksum(ip_header_t* header) {
    header->header_checksum = 0;
    header->header_checksum = checksum(header, sizeof(ip_header_t));
}

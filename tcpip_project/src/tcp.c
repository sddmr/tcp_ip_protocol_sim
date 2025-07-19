#include "tcp.h"
#include <string.h>
#include <arpa/inet.h>



void tcp_init_header(tcp_header_t* header, uint16_t src_port, uint16_t dst_port) {
    memset(header, 0, sizeof(tcp_header_t));
    header->source_port = htons(src_port);
    header->dest_port = htons(dst_port);
    header->data_offset = (sizeof(tcp_header_t) / 4) << 4;  // data offset in 4-byte words
    header->window_size = htons(65535);
}

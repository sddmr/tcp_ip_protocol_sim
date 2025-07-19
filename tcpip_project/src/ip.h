#ifndef IP_H
#define IP_H

#include <stdint.h>

#pragma pack(push, 1)
typedef struct {
    uint8_t  ihl:4;
    uint8_t  version:4;
    uint8_t  tos;
    uint16_t total_length;
    uint16_t identification;
    uint16_t flags_fragment_offset;
    uint8_t  ttl;
    uint8_t  protocol;
    uint16_t header_checksum;
    uint32_t source_ip;
    uint32_t dest_ip;
} ip_header_t;
#pragma pack(pop)

void ip_init_header(ip_header_t* header, uint32_t src, uint32_t dst, uint16_t data_len);
void ip_calculate_checksum(ip_header_t* header);

#endif

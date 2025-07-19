#ifndef TCP_H
#define TCP_H

#include <stdint.h>

#pragma pack(push, 1)
typedef struct {
    uint16_t source_port;
    uint16_t dest_port;
    uint32_t seq_number;
    uint32_t ack_number;
    uint8_t  data_offset;  // 4 bits data offset + 4 bits reserved
    uint8_t  flags;
    uint16_t window_size;
    uint16_t checksum;
    uint16_t urgent_pointer;
} tcp_header_t;
#pragma pack(pop)

void tcp_init_header(tcp_header_t* header, uint16_t src_port, uint16_t dst_port);

#endif

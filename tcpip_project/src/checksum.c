#include "checksum.h"

uint16_t checksum(void* vdata, size_t length) {
    char* data = (char*)vdata;
    uint32_t sum = 0;

    while (length > 1) {
        sum += *((uint16_t*)data);
        data += 2;
        length -= 2;
    }

    if (length > 0) {
        uint16_t last_byte = 0;
        *((uint8_t*)&last_byte) = *data;
        sum += last_byte;
    }

    while (sum >> 16) {
        sum = (sum & 0xFFFF) + (sum >> 16);
    }

    return (uint16_t)(~sum);
}

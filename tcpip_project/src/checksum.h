#ifndef CHECKSUM_H
#define CHECKSUM_H

#include <stdint.h>
#include <stddef.h>

uint16_t checksum(void* vdata, size_t length);

#endif

#ifndef REGISTER_ACCESS_H
#define REGISTER_ACCESS_H

#include <stdint.h>

#define WRITE_REGISTER(addr, val) (*((volatile uint32_t *)(addr))) = (uint32_t)(val)
#define READ_REGISTER(addr) (*((volatile uint32_t *)(addr)))

#endif // REGISTER_ACCESS_H

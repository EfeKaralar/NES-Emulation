#ifndef BUS_H
#define BUS_H

#include <cstdint>

#include "cpu6502.h"
#include "ram.h"

typedef struct bus{
  // TODO: Implement
  cpuO6502_t cpu;
  ram_t* ram;
}bust_t;

void bus_connect(bus_t bus);

void bus_write(bus_t bus, uint16_t addr, uint8_t data);

uint8_t bus_read(bus_t bus, uint16_t addr, bool readOnly); 

#endif // BUS_H

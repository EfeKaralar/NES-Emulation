#include <cstdint>

typedef struct ram{
  // TODO: Implement 
}ram_t;

void init_ram();

void ram_write(ram_t ram, uint16_t addr, uint8_t data);

uint8_t ram_read(ram_t ram, uint16_t addr, bool readOnly); 


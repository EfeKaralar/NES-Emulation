void init_ram(){
  // TODO: Implement
}


void ram_write(ram_t ram, uint16_t addr, uint8_t data){
  if (addr > 0x0000 && addr <= 0xFFFF){   
    ram[addr] = data;
  }
}

uint8_t ram_read(ram_t ram, uint16_t addr, uint8_t data){
  if (addr > 0x0000 && addr <= 0xFFFF){   
   return ram[addr];
  }
  return 0x0;
 }

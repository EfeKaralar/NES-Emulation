void bus_connect(bus_t bus){
  // TODO: Implement
  break;
}

void bus_write(bus_t bus, uint16_t addr, uint8_t data){
  bus_write(bus->ram, addr, data);
}

uint8_t bus_read(bus_t bus, uint16_t addr, bool readOnly){
  return bus_read(bus->ram, addr, data);
}


			

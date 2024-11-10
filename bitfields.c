#include <cstdint>

// Bitfield structure
typedef struct bitfield{
  // bitfield structure of 16 bits
  // manipulate blocks 1 & 2 to store values
  // access block var to address bitfield  
  uint8_t byte;
}bitfield_t;


// Functions
// B: Byte
// hB: half-byte
bitfield_t get_hB1(bitfield_t bitfield){
  return bitfield & 0b00001111;
}

bitfield_t get_hB2(bitfield_t bitfield){
  return bitfield &  0b11110000;
}



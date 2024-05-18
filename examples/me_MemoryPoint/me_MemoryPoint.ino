// [me_MemoryPoint] compilation test

/*
  Author: Martin Eden
  Last mod.: 2024-05-17
*/

#include <me_MemoryPoint.h>

void setup()
{
  using namespace me_MemoryPoint;

  TMemoryPoint MemoryPoint = 0x1F;
  TMemoryPoint_Bits BitAddress = { .Base = 0x003F, .BitOffs = 7 };
}

void loop()
{
}

/*
  2024-05-17
*/

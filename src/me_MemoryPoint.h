// Memory address description. Bit granularity is possible.

/*
  Author: Martin Eden
  Last mod.: 2024-05-20
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_MemoryPoint
{
  using namespace me_BaseTypes;

  /*
    Position in memory. Byte granularity.

    Defined as union.

      Addr - address
      Bytes - byte array casted on that location
  */
  typedef union
  {
    TUint_2 Addr;
    TUint_1 * Bytes;
  } TMemoryPoint;

  /*
    Position in memory. Bit granularity.

      Base - memory position with byte granularity
      BitOffs - bit offset from that position
  */
  struct TMemoryPoint_Bits
  {
    TMemoryPoint Base;
    TUint_1 BitOffs;
  };
}

/*
  2024-05-17 TMemoryPoint is TUint_2
  2024-05-19 TMemoryPoint is TUint_1*. Example is ugly but I need indexing.
  2024-05-20 TMemoryPoint is union! Best (or worst) of the both worlds.
*/

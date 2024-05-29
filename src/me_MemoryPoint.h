// Memory address description. Bit granularity is possible.

/*
  Author: Martin Eden
  Last mod.: 2024-05-29
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_MemoryPoint
{
  using
    me_BaseTypes::TUint_2,
    me_BaseTypes::TUint_1;

  /*
    Position in memory. Byte granularity.

    Addr - address
  */
  struct TMemoryPoint
  {
    TUint_2 Addr;

    void PrintWrappings();
  };

  /*
    Position in memory. Bit granularity.

      Base - memory position with byte granularity
      BitOffs - bit offset from that position
  */
  struct TMemoryPoint_Bits
  {
    TMemoryPoint Base;
    TUint_1 BitOffs;

    void PrintWrappings();
  };
}

/*
  2024-05-17 TMemoryPoint is TUint_2
  2024-05-19 TMemoryPoint is TUint_1*. Example is ugly but I need indexing.
  2024-05-20 TMemoryPoint is union! Best (or worst) of the both worlds.
  2024-05-29
    [/] TMemoryPoint is .Addr: TUint_2. Bytes pointer cast is moving
    to TMemorySegment.
    [+] PrintWrappings()
*/

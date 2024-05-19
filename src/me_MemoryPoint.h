// Memory address description. Bit granularity is possible.

// Maximum address 64 KiB. This structure is not for larger systems.

/*
  Author: Martin Eden
  Last mod.: 2024-05-18
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_MemoryPoint
{
  using namespace me_BaseTypes;

  typedef TUint_1 * TMemoryPoint;

  struct TMemoryPoint_Bits
  {
    TMemoryPoint Base;
    TUint_1 BitOffs;
  };
}

/*
  2024-05-17 TMemoryPoint is TUint_2
  2024-05-19 TMemoryPoint is TUint_1*. Example is ugly but I need indexing.
*/

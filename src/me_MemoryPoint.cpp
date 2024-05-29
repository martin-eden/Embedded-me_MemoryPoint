// [me_MemoryPoint] companion functions

/*
  Author: Martin Eden
  Last mod.: 2024-05-29
*/

#include "me_MemoryPoint.h"

#include <stdio.h> // printf()

/*
  Memory point, byte granularity:

    Print structure values to stdout in human-readable format.
*/
void me_MemoryPoint::TMemoryPoint::DebugPrint()
{
  printf("(Addr 0x%04X)", Addr);
}

/*
  Memory point, bit granularity:

    Print structure values to stdout in human-readable format.
*/
void me_MemoryPoint::TMemoryPoint_Bits::DebugPrint()
{
  printf("(");
  printf("Base ");
  Base.DebugPrint();
  printf(" BitOffs %u", BitOffs);
  printf(")");
}

/*
  2024-05-29 DebugPrint
*/

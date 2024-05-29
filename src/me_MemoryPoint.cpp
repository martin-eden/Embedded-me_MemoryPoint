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
void me_MemoryPoint::TMemoryPoint::PrintWrappings()
{
  printf("(Addr 0x%04X)", Addr);
}

/*
  Memory point, bit granularity:

    Print structure values to stdout in human-readable format.
*/
void me_MemoryPoint::TMemoryPoint_Bits::PrintWrappings()
{
  printf("(");
  printf("Base ");
  Base.PrintWrappings();
  printf(" BitOffs %u", BitOffs);
  printf(")");
}

/*
  2024-05-29 PrintWrappings
*/

// [me_MemoryPoint] compilation test

/*
  Author: Martin Eden
  Last mod.: 2024-05-29
*/

#include <me_MemoryPoint.h>

#include <me_InstallStandardStreams.h>
#include <me_UartSpeeds.h>
#include <me_BaseTypes.h>

// Forwards
void Test();

void setup()
{
  Serial.begin(me_UartSpeeds::Arduino_Normal_Bps);
  delay(1500);
  InstallStandardStreams();

  printf("[me_MemoryPoint] Okay, we are here.\n");

  Test();
}

void loop()
{
}

void Test()
{
  /*
    There's not much to write as I'm moving (TUint_1 * Bytes) cast
    to TMemorySegment. I can cast it here to show memory read/write
    access but it's out of scope of library test.
  */

  using me_MemoryPoint::TMemoryPoint;

  TMemoryPoint Timer_0_Counter = { .Addr = 0x46 };

  printf("Timer_0_Counter ");
  Timer_0_Counter.DebugPrint();
  printf("\n");

  // --

  using me_MemoryPoint::TMemoryPoint_Bits;

  TMemoryPoint_Bits Pin_13_Value =
  {
    .Base = { .Addr = 0x25 },
    .BitOffs = 5,
  };

  printf("Pin_13_Value ");
  Pin_13_Value.DebugPrint();
  printf("\n");
}

/*
  2024-05-17
  2024-05-20
  2024-05-29
*/

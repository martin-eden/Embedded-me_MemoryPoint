// [me_MemoryPoint] demo

/*
  Author: Martin Eden
  Last mod.: 2024-05-20
*/

#include <me_MemoryPoint.h>

#include <me_BaseTypes.h>
#include <me_InstallStandardStreams.h>
#include <me_UartSpeeds.h>

// Forwards
void TestByteAddress();
void TestBitAddress();

void setup()
{
  Serial.begin(me_UartSpeeds::Arduino_Normal_Bps);
  delay(1500);
  InstallStandardStreams();

  printf("[me_MemoryPoint] Okay, we are here.\n");

  TestByteAddress();

  TestBitAddress();
}

void loop()
{
}

/*
  Display live byte.

  We are using 8-bit timer 0 counter also known as TCNT0.
*/
void TestByteAddress()
{
  printf("> TestByteAddress()\n");

  using namespace me_MemoryPoint;

  TMemoryPoint Timer_0_Counter = { .Addr = 0x46 };

  for (TUint_1 Iteration = 1; Iteration <= 4; ++Iteration)
  {
    TUint_1 Value = Timer_0_Counter.Bytes[0];

    printf("Timers[0].Counter: %02X / FF\n", Value);

    delay(100);
  }

  printf("< TestByteAddress()\n");
}

/*
  Dynamically displaying state of pin.

  Experimental pin here is LED pin, 13. We turning it OFF, ON, OFF
  with .5 seconds between states.
*/
void TestBitAddress()
{
  printf("> TestBitAddress()\n");

  using namespace me_MemoryPoint;

  TMemoryPoint_Bits Pin_13_Value =
    {
      .Base = { .Addr = 0x25 },
      .BitOffs = 5,
    };

  TUint_1 CorrespondingPin = 13;
  pinMode(CorrespondingPin, OUTPUT);

  TUint_1 Value;

  digitalWrite(CorrespondingPin, LOW);
  Value = (Pin_13_Value.Base.Bytes[0] >> Pin_13_Value.BitOffs) & 1;
  printf("Pin value: %u\n", Value);

  delay(500);

  digitalWrite(CorrespondingPin, HIGH);
  Value = (Pin_13_Value.Base.Bytes[0] >> Pin_13_Value.BitOffs) & 1;
  printf("Pin value: %u\n", Value);

  delay(500);
  digitalWrite(CorrespondingPin, LOW);
  Value = (Pin_13_Value.Base.Bytes[0] >> Pin_13_Value.BitOffs) & 1;
  printf("Pin value: %u\n", Value);

  printf("< TestBitAddress()\n");
}

/*
  2024-05-17
  2024-05-20
*/

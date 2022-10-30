extern "C"
{
#include "HallSensorLedDriver.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(HallSensorLedDriver)
{
    void setup()
    {
      HallSensorLedDriver_Create();
    }

    void teardown()
    {
       HallSensorLedDriver_Destroy();
    }
};

TEST(HallSensorLedDriver, Create)
{
  FAIL("Start here");
}


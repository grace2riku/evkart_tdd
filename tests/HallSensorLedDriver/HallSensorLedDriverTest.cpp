extern "C"
{
#include "HallSensorLedDriver.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(HallSensorLedDriver)
{
    void setup()
    {
//      HallSensorLedDriver_Create();
    }

    void teardown()
    {
       HallSensorLedDriver_Destroy();
    }
};

// ドライバを初期化したら、すべてのLEDが消灯している
TEST(HallSensorLedDriver, LedsOffAfterCreate)
{
  unsigned char virtualLeds = 0xff;
  HallSensorLedDriver_Create(&virtualLeds);
  BYTES_EQUAL(0, virtualLeds);
}


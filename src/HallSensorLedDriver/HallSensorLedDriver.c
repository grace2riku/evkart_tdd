#include "HallSensorLedDriver.h"

static unsigned char* hallSensorLedsAddress;

void HallSensorLedDriver_Create(unsigned char* address)
{
//    *address = 0;
    hallSensorLedsAddress = address;
    *hallSensorLedsAddress = 0;
}

void HallSensorLedDriver_Destroy(void)
{
}

void HallSensorLedDriver_TurnOn(unsigned char ledBitNumber) {
    *hallSensorLedsAddress = 0x04;
}

void HallSensorLedDriver_TurnOff(unsigned char ledBitNumber){
    *hallSensorLedsAddress = 0x00;
}

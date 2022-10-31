#ifndef D_HallSensorLedDriver_H
#define D_HallSensorLedDriver_H

/**********************************************************
 *
 * HallSensorLedDriver is responsible for ...
 *
 **********************************************************/

void HallSensorLedDriver_Create(unsigned char* address);
void HallSensorLedDriver_Destroy(void);
void HallSensorLedDriver_TurnOn(unsigned char ledBitNumber);

#endif  /* D_FakeHallSensorLedDriver_H */

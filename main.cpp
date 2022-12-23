#include "mbed.h"

DigitalOut vibMotor(D6);
DigitalOut led_green(LED_GREEN);
int on = 1, off = 0;

int main()
{
    while (true) 
    {
        vibMotor = on;
        wait_us(500000);
        vibMotor = off;
        wait_us(500000);
    }
}
#include "uop_msb.h"
using namespace uop_msb;


#define WAIT_TIME_MS 500 


DigitalOut red(TRAF_RED1_PIN,1);         //Note the initial state. It starts with the red led on and others off
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);


//Object for controlling the LCD
LCD_16X2_DISPLAY lcd;
//16bit variable for the yellow led while less than loop



int main()
{
    while(true)
    {
        unsigned char counter = 0; 
        amber = 0;
        red = 1; // red led on
        lcd.cls();
        lcd.puts("RED");
        wait_us(10000000); // 10 seconds was 1000000 micro seconds (1000 milisecond)
        


        amber = 1;
        lcd.cls();
        lcd.puts("Amber");
        wait_us(2000000); // 2000 miliseconds or 2 seconds


        red = 0;
        amber = 0;
        green = 1;
        lcd.cls();
        lcd.puts("Green");    
        wait_us(10000000); // 10 seconds
        


        green = 0;
        lcd.cls();
        lcd.puts("Amber");


        while (counter < 7) // from the helloworld task 103 while counter less than loop
        {
            amber = !amber;
            printf("Flash Count: %d\n", counter);
            wait_us(1000000); // 1000 mili seconds
            counter = counter + 1;    
        }
        wait_us(2000000); // resets the while true loop after 2000 miliseconds or 2 seconds
    }


   /* lcd.cls();
    lcd.puts("TASK-104");*/


    //flashes the leds on and off
    /*while (true)
    {
        red = !red;
        amber = !amber;
        green = !green;
        wait_us(WAIT_TIME_MS * 1000);
    }*/
}

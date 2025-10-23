// You need this to use the Module Support Board
#include "uop_msb.h"
using namespace uop_msb;


#define WAIT_TIME_MS 500 
DigitalOut greenLED(TRAF_GRN1_PIN);
DigitalOut redLED(TRAF_RED1_PIN);
DigitalOut yellowLED(TRAF_YEL1_PIN);
Buzzer buzz;
Buttons buttons;


// TIP: (I suggest you read this!)
//
// Press the black reset button to restart the code (and stop the sound)
// Otherwise, the noise can be "distracting" :)


//DESC: sounds out SOS in morse code
int main()
{
    //Wait for the BLUE button to be pressed (otherwise this becomes super annoying!)
    while (buttons.BlueButton == 0);
    
    //Repeat everything "forever" (until the power is removed or the chip is reset)
    while (true)
    {
        //Green LED DOT On for 150ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 300);  //150ms


        //pause
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 200);  //1000ms


        //Green LED DOT On for 150ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 300);  //150ms


        //pause 
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 200);  //100ms


        //Green LED DOT On for 150ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 300);  //150ms


        //long pause
        greenLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 300);  //150ms


        //Red LED DASH on for 450ms
        redLED = 1;
        buzz.playTone("D", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 900);  //450ms


        //pause 
        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 200);  //100ms


        //Red LED DASH on for 450ms
        redLED = 1;
        buzz.playTone("D", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 900);  //450ms


        //pause 
        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 200);  //100ms


        //Red LED DASH on for 450ms
        redLED = 1;
        buzz.playTone("D", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 900);  //450ms


        //long pause
        redLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 300);  //150ms


        //Yellow LED DOT On for 150ms
        yellowLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 300);  //150ms


        //pause
        yellowLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 200);  //1000ms


        //Yellow LED DOT On for 150ms
        yellowLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 300);  //150ms


        //pause 
        yellowLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 200);  //100ms


        //Yellow LED DOT On for 150ms
        yellowLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 300);  //150ms


        //pause 
        yellowLED = 0;
        buzz.rest();
        wait_us(WAIT_TIME_MS * 200);  //100ms


        /*//Off for 450ms
        greenLED = 0;
        buzz.playTone("D", Buzzer::HIGHER_OCTAVE);
        wait_us(WAIT_TIME_MS * 900);  //450ms


        //On for 150ms
        greenLED = 1;
        buzz.playTone("C");
        wait_us(WAIT_TIME_MS * 300);  //150ms*/


        //Pause
        buzz.rest();
        wait_us(WAIT_TIME_MS * 1000);


    }
}
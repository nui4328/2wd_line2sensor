#include <my_rp_2wd.h>
#include <Wire.h>
#include <EEPROM.h>
#define EEPROM_ADDR 0x50

//------------------------->>
unsigned long lasts_time=millis();
int sensor_maxs[] = {954, 966, 925, 995, 766, 955, 941, 922}; 
int sensor_mins[] = {289, 231, 175, 186, 182, 164, 189, 184}; 


void setup()
  {    
     Serial.begin(9600);
    
     mydisplay_background(black);
     mydisplay("MY-MAKERS", 20, 30, 2, white);
    
     sw_start();    
         //cal_censor(0, 0);sw();
         //test_line_r();
         
//\\------------------------------------------->>>>>  เขียนโค๊ดที่นี้ 

     robot_FW_line(50, 0.3);
     robot_TR(50, 30);
    

//\\------------------------------------------->>>>>   เขียนโค๊ดที่นี้ 
     
      
  }

void loop() 
  {  

    
  }

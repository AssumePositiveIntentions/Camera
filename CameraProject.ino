
// off to picture: 
// part i: hold on/off for 1.5 seconds
// part ii: press mode once
// part iii: click on/off to take picture

//
#include <EYW.h>
#include <Servo.h>
#include <Wire.h>

//TO DO: 
//--------------------------
//define things here, everything else should run automatically
int pinNum = 1; //red wire
int signalPin1 = 9; // white wire

int angleHome = 0;

int holdTime = 2000; //time in between parts

int angle1 = 30;
int angle2 = -30;
int angle3 = 30;

int delay1 = 2000; //time holding down
int delay2 = 2000; //time holding down
int delay3 = 2000; //time holding down

//---------------------------
Servo servo;

void setup() { 
  servo.attach(signalPin1); // attach the signal pin of servo to signalPin1 of arduino, white wire

// part 1, hold on/off for 1.5s
  for(int angle = angleHome; angle <= angle1; angle ++)    // command to move from angleHome degrees to angle1 degrees 
  {                                  
    servo.write(angle);                 //command to rotate the servo to the specified angle
    delay(15);                       
  } 
  delay(delay1); //holds button for delay1 time
  
  for(int angle = angle1; angle >= angleHome; angle--)     // command to move from angle1 degrees to angleHome degrees 
  {                                
    servo.write(angle);              //command to rotate the servo to the specified angle
    delay(15);                       
  } 
    delay(holdTime); //stays at angleHome for holdTime time
  
  
// part 2, press mode button
  for (int angle = angleHome; angle <= angle2; angle ++)    // command to move from angleHome degrees to angle2 degrees 
  {                                  
    servo.write(angle);                 //command to rotate the servo to the specified angle
    delay(15);                       
  } 
  delay(delay2);         //holds button for delay2 time
  
  for(int angle = angle2; angle >= angleHome; angle--)     // command to move from angle1 degrees to angleHome degrees 
  {                                
    servo.write(angle);              //command to rotate the servo to the specified angle
    delay(15);                       
  } 
    delay(holdTime); //stays at angleHome for holdTime time
  
  
// part 3, click on/off to take photo
  for(int angle = angleHome; angle <= angle3; angle ++)    // command to move from angleHome degrees to angle2 degrees 
  {                                  
    servo.write(angle);                 //command to rotate the servo to the specified angle
    delay(15);                       
  } 
  
  delay(delay3); //holds button for delay2 time
  
  for(int angle = angle3; angle >= angleHome; angle--)     // command to move from angle1 degrees to angleHome degrees 
  {                                
    servo.write(angle);              //command to rotate the servo to the specified angle
    delay(15);                    
  }
  //stays at rest forever
}

void loop(){
}



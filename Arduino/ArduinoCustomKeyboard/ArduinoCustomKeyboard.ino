
/*
  KeyboardAndMouseControl

 Controls the mouse from five pushbuttons on an Arduino Leonardo, Micro or Due.

 Hardware:
 * 5 pushbuttons attached to D2, D3, D4, D5, D6

 The mouse movement is always relative. This sketch reads
 four pushbuttons, and uses them to set the movement of the mouse.

 WARNING:  When you use the Mouse.move() command, the Arduino takes
 over your mouse!  Make sure you have control before you use the mouse commands.

 created 15 Mar 2012
 modified 27 Mar 2012
 by Tom Igoe

 this code is in the public domain

 */

// set pin numbers for the five buttons:
const int digiA = 30;
const int digiB = 34;
const int digiC = 36;
const int digiD = 38;
const int digiE = 40;
const int digiF = 42;
const int digiG = 44;
const int digiH = 46;
const int digiI = 48;
const int digiJ = 50;
const int digiK = 52;

boolean didType = false;

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() { // initialize the buttons' inputs:
  pinMode(digiA, INPUT);
  pinMode(digiB, INPUT);
  pinMode(digiC, INPUT);
  pinMode(digiD, INPUT);
  pinMode(digiE, INPUT);
  pinMode(digiF, INPUT);
  pinMode(digiG, INPUT);
  pinMode(digiH, INPUT);
  pinMode(digiI, INPUT);
  pinMode(digiJ, INPUT);
  pinMode(digiK, INPUT);

  Serial.begin(9600);
  // initialize mouse control:
  Keyboard.begin();
  
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() 
{
  //start first key
  if (digitalRead(digiA) == LOW) 
  {
    Keyboard.press('A');
    delay(10);
    Keyboard.release('A');
  } 
  else if(digitalRead(digiB) == LOW)
  {
    Keyboard.press('B');
    delay(10);
    Keyboard.release('B');
  }
  else if(digitalRead(digiC) == LOW)
  {
    Keyboard.press('C');
    delay(10);
    Keyboard.release('C');
  }
  else if(digitalRead(digiD) == LOW)
  {
    Keyboard.press('D');
    delay(10);
    Keyboard.release('D');
  }
  else if(digitalRead(digiE) == LOW)
  {
    Keyboard.press('E');
    delay(10);
    Keyboard.release('E');
  }
  else if(digitalRead(digiF) == LOW)
  {
    Keyboard.press('F');
    delay(10);
    Keyboard.release('F');
  }
  else if(digitalRead(digiG) == LOW)
  {
    Keyboard.press('G');
    delay(10);
    Keyboard.release('G');
  }
  else if(digitalRead(digiH) == LOW)
  {
    Keyboard.press('H');
    delay(10);
    Keyboard.release('H');
  }
  else if(digitalRead(digiI) == LOW)
  {
    Keyboard.press('I');
    delay(10);
    Keyboard.release('I');
  }
    else if(digitalRead(digiJ) == LOW)
  {
    Keyboard.press('J');
    delay(10);
    Keyboard.release('J');
  }
    else if(digitalRead(digiK) == LOW)
  {
    Keyboard.press('K');
    delay(10);
    Keyboard.release('K');
  }
  
  //--------------
}


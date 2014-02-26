
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
    delay(100);
    Keyboard.press('A');
    delay(50);
    Keyboard.release('A');
  } 
  else if(digitalRead(digiB) == LOW)
  {
    delay(100);
    Keyboard.press('B');
    delay(50);
    Keyboard.release('B');
  }
  else if(digitalRead(digiC) == LOW)
  {
    delay(100);
    Keyboard.press('C');
    delay(50);
    Keyboard.release('C');
  }
  else if(digitalRead(digiD) == LOW)
  {
    delay(100);
    Keyboard.press('D');
    delay(50);
    Keyboard.release('D');
  }
  else if(digitalRead(digiE) == LOW)
  {
    delay(100);
    Keyboard.press('E');
    delay(50);
    Keyboard.release('E');
  }
  else if(digitalRead(digiF) == LOW)
  {
    delay(100);
    Keyboard.press('F');
    delay(50);
    Keyboard.release('F');
  }
  else if(digitalRead(digiG) == LOW)
  {
    delay(100);
    Keyboard.press('G');
    delay(50);
    Keyboard.release('G');
  }
  else if(digitalRead(digiH) == LOW)
  {
    delay(100);
    Keyboard.press('H');
    delay(50);
    Keyboard.release('H');
  }
  else if(digitalRead(digiI) == LOW)
  {
    delay(100);
    Keyboard.press('I');
    delay(50);
    Keyboard.release('I');
  }
    else if(digitalRead(digiJ) == LOW)
  {
    delay(100);
    Keyboard.press('J');
    delay(50);
    Keyboard.release('J');
  }
    else if(digitalRead(digiK) == LOW)
  {
    delay(100);
    Keyboard.press('K');
    delay(50);
    Keyboard.release('K');
  }
  
  //--------------
}


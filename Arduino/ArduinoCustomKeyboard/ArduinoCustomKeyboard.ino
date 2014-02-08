
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
const int digiA = 48;
const int digiB = 40;
const int digiC = 42;
const int digiD = 44;
const int digiE = 46;
const int digiF = 50;
const int digiG = 52;
const int digiH = 38;

const int digi1 = 32;
const int digi2 = 30;
const int digi3 = 28;
const int digi4 = 26;
const int digi5 = 24;

const int out1 = 39;
const int out2 = 37;
const int out3 = 35;
const int out4 = 33;
const int out5 = 31;

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
  
  pinMode(digi1, INPUT);
  pinMode(digi2, INPUT);
  pinMode(digi3, INPUT);
  pinMode(digi4, INPUT);
  pinMode(digi5, INPUT);
  
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  pinMode(out5, OUTPUT);

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
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis()/1000);
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
  
  //--------------
  
  
  else if(digitalRead(digi1) == LOW)
  {
    delay(100);
    Keyboard.press('1');
    delay(50);
    Keyboard.release('1');
    digitalWrite(out1, HIGH);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    digitalWrite(out4, LOW);
    digitalWrite(out5, LOW);
  }
  else if(digitalRead(digi2) == LOW)
  {
    delay(100);
    Keyboard.press('2');
    delay(50);
    Keyboard.release('2');
    digitalWrite(out1, LOW);
    digitalWrite(out2, HIGH);
    digitalWrite(out3, LOW);
    digitalWrite(out4, LOW);
    digitalWrite(out5, LOW);
  }
  else if(digitalRead(digi3) == LOW)
  {
    delay(100);
    Keyboard.press('3');
    delay(50);
    Keyboard.release('3');
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, HIGH);
    digitalWrite(out4, LOW);
    digitalWrite(out5, LOW);
  }
  else if(digitalRead(digi4) == LOW)
  {
    delay(100);
    Keyboard.press('4');
    delay(50);
    Keyboard.release('4');
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    digitalWrite(out4, HIGH);
    digitalWrite(out5, LOW);
  }
  else if(digitalRead(digi5) == LOW)
  {
    delay(100);
    Keyboard.press('5');
    delay(50);
    Keyboard.release('5');
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    digitalWrite(out4, LOW);
    digitalWrite(out5, HIGH);
  }
  else
  {
    
  }
}



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

boolean didType = false;

void setup() { // initialize the buttons' inputs:
  pinMode(digiA, INPUT);
  pinMode(digiB, INPUT);
  pinMode(digiC, INPUT);
  pinMode(digiD, INPUT);
  pinMode(digiE, INPUT);
  pinMode(digiF, INPUT);
  pinMode(digiG, INPUT);
  pinMode(digiH, INPUT);

  Serial.begin(9600);
  // initialize mouse control:
  Keyboard.begin();
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
  else
  {
    
  }
}


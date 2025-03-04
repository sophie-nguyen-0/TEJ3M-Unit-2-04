/*
 * Created by Sophie N
 * Created on March 4, 202PIN_5
 *
 * Turns an RGB LED on, showing the different possible colors. 
 */

 const int PIN_5 = 5;
 const int PIN_6 = 6;
 const int PIN_7 = 7;
 int blink_time = 1000;
  
 void setup() 
{
   pinMode(PIN_5, OUTPUT); // GREEN
   pinMode(PIN_6, OUTPUT); // BLUE
   pinMode(PIN_7, OUTPUT); // RED
 }
 
 void loop() 
{
   digitalWrite(PIN_5, HIGH);  // GREEN
   digitalWrite(PIN_6, LOW); 
   digitalWrite(PIN_7, LOW);  
   delay(blink_time);  

   digitalWrite(PIN_5, LOW); // BLUE
   digitalWrite(PIN_6, HIGH);
   digitalWrite(PIN_7, LOW);
   delay(blink_time);

   digitalWrite(PIN_5, LOW); // RED
   digitalWrite(PIN_6, LOW);
   digitalWrite(PIN_7, HIGH);
   delay(blink_time);

   digitalWrite(PIN_5, HIGH); // YELLOW
   digitalWrite(PIN_6, LOW);
   digitalWrite(PIN_7, HIGH);
   delay(blink_time);

   digitalWrite(PIN_5, HIGH);  // CYAN
   digitalWrite(PIN_6, HIGH);
   digitalWrite(PIN_7, LOW);
   delay(blink_time);

   digitalWrite(PIN_5, LOW);  // MAGENTA
   digitalWrite(PIN_6, HIGH);
   digitalWrite(PIN_7, HIGH);
   delay(blink_time);
   
   digitalWrite(PIN_5, HIGH);  // WHITE
   digitalWrite(PIN_6, HIGH);
   digitalWrite(PIN_7, HIGH);
   delay(blink_time);

 }
/*
 * Created by Sophie N
 * Created on March 4, 2025
 
 * Blink with variable 
 * 
 * Turns an RGB LED on, showing the different possible colors. 
 */

 const int PIN_5 = 5;
 int blink_time = 1000;
  
 void setup() 
{
   pinMode(5, OUTPUT); // GREEN
   pinMode(6, OUTPUT); // BLUE
   pinMode(7, OUTPUT); // RED
 }
 
 void loop() 
{
   digitalWrite(5, HIGH);  // GREEN
   digitalWrite(6, LOW); 
   digitalWrite(7, LOW);  
   delay(blink_time);  

   digitalWrite(5, LOW); // BLUE
   digitalWrite(6, HIGH);
   digitalWrite(7, LOW);
   delay(blink_time);

   digitalWrite(5, LOW); // RED
   digitalWrite(6, LOW);
   digitalWrite(7, HIGH);
   delay(blink_time);

   digitalWrite(5, HIGH); // YELLOW
   digitalWrite(6, LOW);
   digitalWrite(7, HIGH);
   delay(blink_time);

   digitalWrite(5, HIGH);  // CYAN
   digitalWrite(6, HIGH);
   digitalWrite(7, LOW);
   delay(blink_time);

   digitalWrite(5, LOW);  // MAGENTA
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   delay(blink_time);
   
   digitalWrite(5, HIGH);  // WHITE
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   delay(blink_time);

 }
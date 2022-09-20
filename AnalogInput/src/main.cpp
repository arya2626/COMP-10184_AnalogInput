#include <Arduino.h> 

// I, Arya Bhoiwala, 000828466 certify that this material is my original work.
// No other person's work has been   used without due acknowledgement.
 
void setup() { 
  // configure the USB serial monitor 
  Serial.begin(115200); 
} 
 
void loop() { 
  int iVal; 
  float dval;

  // read digitized value from the D1 Mini's A/D convertor 
  iVal = analogRead(A0); 

  // math calculation for the the temp untill 50.
  dval = iVal * (3.3/1023.0);

  Serial.println("Digitalized Value of" + String(iVal) + "to an Anlaog Voltage =" + String(dval));

float temp = dval * 15.15;

  if(temp<10){Serial.println("The Temp = " + String(temp)+ "Cold");}

  else if (temp>=10 && temp<=15){Serial.println("The Temp = " + String(temp)+ "Cool");}

  else if (temp>=15 && temp<=25){ Serial.println("The Temp = " + String(temp)+ "Perfect"); }

  else if (temp>=25 && temp<=30){ Serial.println("The Temp = " + String(temp)+ "Warm");}

  else if (temp>=30 && temp<=35){ Serial.println("The Temp = " + String(temp)+ "Hot");}

  else { Serial.println("The Temp = " + String(temp)+"Too Hot");}
 
// print value to the USB port 
  Serial.println("Digitized Value = " + String(iVal)); 
 
  // wait 2 seconds (2000 ms) 
  delay(2000); 
}
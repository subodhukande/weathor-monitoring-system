
#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int tempretureSensor = A0;
int sunSensor=A1;
int humiditySensor=A2;
int airQuality=A3;
const int buzzer = 9;

void setup() 
{
pinMode(buzzer, OUTPUT); 
Serial.begin(9600);
}

void loop() {
  
  int reading = analogRead(tempretureSensor);
  int sun = analogRead(sunSensor);
  int humidity = analogRead(humiditySensor);
  
  humidity = (humidity/1023.0)*100;
  int air = analogRead(airQuality);
  
  Serial.print(sun);
  Serial.println(" brightness units");
  
  float voltage = reading * 5.0;
  voltage = voltage / 1024.0; 
  Serial.print(voltage); 
  Serial.println(" volts");
  float temperatureC = (voltage - 0.5) * 100 ;  
  
  
  lcd.begin(16, 2);
  
  lcd.setCursor(0, 0);
  lcd.print("Sunlight: ");
  lcd.print(sun);
  lcd.setCursor(0, 1);
    
  if(sun>500)
  	lcd.print("Day  ");
  else
    lcd.print("Night  ");
  delay(1000);
  
  
  lcd.clear();
  lcd.print("Temp: ");
  lcd.print(temperatureC);
  lcd.print("C");
  
  Serial.print(temperatureC); 
  Serial.println(" degrees C");
  //delay(1000);
  lcd.setCursor(0, 1);
  if (temperatureC < 20) {
 
    lcd.print("Cold Weather");
    Serial.println("Cold Weather");
    tone(buzzer,100);
  } 
  else if (temperatureC >= 20 && temperatureC < 45){
   
    lcd.setCursor(0, 1);
    lcd.print("Normal Weather");
    Serial.println("Normal Weather");
    noTone(buzzer);
  } 
  else {
 
    lcd.setCursor(0, 1);
    lcd.print("Hot Weather");
    Serial.println("Hot Weather");
    tone(buzzer,1000);
  }
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
	delay(1000);
  
  
  lcd.clear();
  lcd.print("AirQuality:");
  lcd.print(air);
  lcd.print("PPM");
  Serial.print(air);
  Serial.println(" PPM");
  
  lcd.setCursor(0, 1);
  if(air > 150)
    lcd.print("Polluted");
  else{
    lcd.print("Good / Safe");
  	tone(buzzer,100);
  }
  delay(1000);
 
  
  lcd.clear();
  lcd.print("Humidity:");
  lcd.print(humidity);
  lcd.print("%");
  Serial.print(humidity);
  Serial.println("% Humidity");
  
  lcd.setCursor(0, 1);
  if(humidity > 60){
    lcd.print("Too Humid");
    tone(buzzer,100);
  }  
  else if(humidity>=30 && humidity<=60)
    lcd.print("Good / Safe");
  else{
	lcd.print("Less Humid"); 
    tone(buzzer,1000);
  }
  delay(1000);
  
}
 

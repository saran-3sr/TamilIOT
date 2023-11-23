const int sensor_pin = A0;

void setup()
{
  Serial.begin(9600);
  
  }

void loop()

 {
  float percentage;
  int sensor_analog;
  sensor_analog = analogRead(sensor_pin);
  percentage = (100- ((sensor_analog/1023.00)*100));
  Serial.print("The moisture percentage = ");
  Serial.print(percentage);
  Serial.print("%\n\n");
  delay(1000);
 }
 

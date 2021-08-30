long seconds = 0;

void setup(){
  
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  delay(1000);
  
}

void loop(){
  
  seconds = seconds + 1;
  Serial.print(seconds);
  Serial.println(" sec have elapsed");
  long realtime = millis();
  Serial.print(realtime);
  Serial.println(" have really passed");
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(800);

}

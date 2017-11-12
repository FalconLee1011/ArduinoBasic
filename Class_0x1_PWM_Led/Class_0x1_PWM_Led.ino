int led = 9;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  for(int pwmVal = 0; pwmVal <= 255; pwmVal++){
    analogWrite(led, pwmVal);
    delay(10);
  }
  for(int pwmVal = 255; pwmVal >= 0; pwmVal--){
    analogWrite(led, pwmVal);
    delay(10);
  }
  delay(500);
}

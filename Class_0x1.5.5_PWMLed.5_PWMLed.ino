int led[5] = {3, 5, 6, 9, 11};

void setup() {
  for(int i = 0; i <= 4; i++){
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  for(int sl = 0; sl <=4; sl++){
    for(int pwmVal = 0; pwmVal <= 255; pwmVal++){
    analogWrite(led[sl], pwmVal);
    delay(5);
    }
  }
  for(int sl = 0; sl <=4; sl++){
    for(int pwmVal = 255; pwmVal >= 0; pwmVal--){
      analogWrite(led[sl], pwmVal);
      delay(5);
    }
  }
  delay(5);
}

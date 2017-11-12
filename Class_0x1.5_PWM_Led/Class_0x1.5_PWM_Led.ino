int led[5] = {3, 5, 6, 9, 11};
int x = 1;
int pwmVal = 0;

void setup(){
  for(int i=0; i <= 4; i++){
    pinMode(led[i],OUTPUT);
  }
}

void loop() {
  for(pwmVal; pwmVal <= 255 and pwmVal >= 0; pwmVal = pwmVal + x){
    for(int sl = 0; sl <= 4; sl++){
      analogWrite(led[sl], pwmVal);
      delay(5);
    }
  }
  x = - x;
  pwmVal = pwmVal + x;
  delay(5);
}

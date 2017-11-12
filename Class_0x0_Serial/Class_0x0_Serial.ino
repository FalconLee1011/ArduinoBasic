int led = 13;
int AIA = 5;
int AIB = 6;

void setup() {
  Serial.begin(9600);
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  Serial.println("Hello, World!");
  Serial.println("Enter 0 or 1");
}

void loop() {

  while(Serial.available()){
    
    char Direction = Serial.read();
  
    if(Direction == '1'){
      digitalWrite(AIA, LOW);
      digitalWrite(AIB, HIGH);
      Serial.println("AIB");
    }
    else if(Direction == '0'){
      digitalWrite(AIA, HIGH);
      digitalWrite(AIB, LOW);
      Serial.println("AIA");
    }
    delay(5);
  }
}

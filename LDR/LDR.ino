const int ldrPin = A3;
const int led = 5;

void setup() {
  pinMode(ldrPin, INPUT); 
  pinMode(led, OUTPUT);

  digitalWrite(led, LOW);
  Serial.begin(9600);
}

void loop() {
  int ldrVal = analogRead(ldrPin);
  Serial.println(ldrVal);
  if(ldrVal > 600){
    
    hitAnimation();
  }
  else{
    digitalWrite(led, LOW);
  }
  Serial.println(ldrVal);
//  delay(50);
}

void hitAnimation(){
  for(int i=0; i<12; i++){
    digitalWrite(led, HIGH);
    delay(150);
    digitalWrite(led, LOW);
    delay(150);
  }
}

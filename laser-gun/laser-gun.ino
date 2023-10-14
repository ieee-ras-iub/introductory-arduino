// pin declaration
const int triggerPin = 6;
const int reloadPin = 7;
const int laser = 12;

int triggerCount = 0;
const int triggerLimit = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(triggerPin, INPUT);
  pinMode(reloadPin, INPUT);
  pinMode(laser, OUTPUT);

  digitalWrite(laser, LOW);

  Serial.begin(9600);
}

void loop() {
  
  int triggerVal = digitalRead(triggerPin);
  int reloadVal = digitalRead(reloadPin);
  
  if(triggerVal == 1 && triggerCount< triggerLimit){
    Serial.println(triggerVal);
    
    digitalWrite(laser, HIGH);
    triggerCount++;
    delay(250);
  }
  else{
    digitalWrite(laser, LOW);
  }

  if(reloadVal == 1){
    delay(250);
    triggerCount = 0;
  }
  
//  digitalWrite(laser, HIGH);
//  delay(250);
//  digitalWrite(laser, LOW);
//  delay(250);
}




//returnType functionName (set of parameters){
//  Block of code
//}

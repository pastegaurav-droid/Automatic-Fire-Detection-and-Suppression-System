const int flameSensor = 2;
const int waterPump = 8;

void setup() {

  pinMode(flameSensor, INPUT);
  pinMode(waterPump, OUTPUT);

  digitalWrite(waterPump, LOW);

  Serial.begin(9600);
}

void loop() {

  int fireStatus = digitalRead(flameSensor);

  if (fireStatus == LOW) {

    Serial.println("Fire Detected!");

    digitalWrite(waterPump, HIGH);

    delay(5000);
    
    digitalWrite(waterPump, LOW);

    Serial.println("Suppression Cycle Completed");

  } 
  else {

    Serial.println("No Fire Detected");

    digitalWrite(waterPump, LOW);
  }

  delay(500);
}

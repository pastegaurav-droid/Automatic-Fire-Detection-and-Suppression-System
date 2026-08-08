const int flameSensor = 2;

const int waterPump = 8;

const int motorLeft1  = 3;
const int motorLeft2  = 4;
const int motorRight1 = 5;
const int motorRight2 = 6;

void setup() {

  pinMode(flameSensor, INPUT);

  pinMode(waterPump, OUTPUT);

  pinMode(motorLeft1, OUTPUT);
  pinMode(motorLeft2, OUTPUT);
  pinMode(motorRight1, OUTPUT);
  pinMode(motorRight2, OUTPUT);


  digitalWrite(waterPump, LOW);
  stopRobot();

  Serial.begin(9600);
}

void loop() {

  int fireStatus = digitalRead(flameSensor);
  
  if (fireStatus == LOW) {

    Serial.println("Fire Detected!");

  
    stopRobot();

    digitalWrite(waterPump, HIGH);

    delay(5000);

    digitalWrite(waterPump, LOW);

    Serial.println("Suppression Cycle Completed");

  } 
  else {

    Serial.println("No Fire Detected");

    digitalWrite(waterPump, LOW);

    stopRobot();
  }

  delay(500);
}

void stopRobot() {

  digitalWrite(motorLeft1, LOW);
  digitalWrite(motorLeft2, LOW);

  digitalWrite(motorRight1, LOW);
  digitalWrite(motorRight2, LOW);
}

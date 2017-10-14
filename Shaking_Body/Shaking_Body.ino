/* Halloween 2017 Shaking Body 
 *  Robin Gambin 
 *  System will use a 12V motor with an off balance arm to create a
 *  shaking motion in the body.
 *  Lights and audio will also be activated.
 */
const int triggerPin=2; //remote trigger maybe used later
const int motorPin=9; //power relay control. Motor only needs to turn on
const int lightPin=10; //power relay for lights
const int audioPin=11; //trigger soundFx card


void setup() {
  pinMode(triggerPin, INPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(lightPin, OUTPUT);
  pinMode(audioPin, OUTPUT);
}

void loop() {
  digitalWrite(motorPin, HIGH);
  digitalWrite(lightPin, HIGH);
  digitalWrite(audioPin, HIGH);

  delay(5000);

  digitalWrite(motorPin, LOW);
  digitalWrite(lightPin, LOW);
  digitalWrite(audioPin, LOW);

  delay(5000);


  
}

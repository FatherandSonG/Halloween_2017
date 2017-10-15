/* Halloween 2017 Shaking Body 
 *  Robin Gambin 
 *  System will use a 12V motor with an off balance arm to create a
 *  shaking motion in the body.
 *  120V spot light will be controlled from a Grove relay 
 *  and audio will also be activated us a Adafruit SoundFX board and battery powered speaker.
 */
const int triggerPin=2; //remote trigger maybe used later
const int motorPin=9; //power relay control. Motor only needs to turn on
const int lightPin=10; //power relay for lights
const int audioPin=11; //trigger soundFx card
//const int startPin=13; //just to know when the 

void setup() {
 // pinMode(startPin, OUTPUT);
  pinMode(triggerPin, INPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(lightPin, OUTPUT);
  pinMode(audioPin, OUTPUT);
}

void loop() {
 // digitalWrite(startPin,HIGH);
//  delay(3000);
  digitalWrite(audioPin, HIGH);
  //digitalWrite(startPin, LOW);
  delay(250);
  digitalWrite(motorPin, HIGH);
  digitalWrite(lightPin, HIGH);
  

  delay(5000);

  digitalWrite(motorPin, LOW);
  digitalWrite(lightPin, LOW);
  digitalWrite(audioPin, LOW);

  delay(5000);


  
}

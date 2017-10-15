const int ENA=9;
const int IN1=7;
const int IN2=8;

void setup() {
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);


}

void loop() {
  analogWrite(ENA,75);
  digitalWrite(IN1,LOW);// rotate forward
 digitalWrite(IN2,HIGH);
 delay(2000); //displacement at 74 over 2s
 analogWrite(ENA,0);
 delay(2000);  
 analogWrite(ENA, 255);
 digitalWrite(IN1,HIGH);// rotate reverse
 digitalWrite(IN2,LOW);
 delay(465); //return at 255 over 460ms
analogWrite(ENA,0);
delay(2000);
}

int bulb1=2;
int bulb2=3;

void setup() {
  // put your setup code here, to run once:
 pinMode(bulb1,OUTPUT);
 pinMode(bulb2,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 while(Serial.available()) {
  String s=Serial.readString();
  if (s=="bulb1on") {
    bulb1on();
  } else if(s=="bulb1off") {
    bulb1off();
  } else if(s=="bulb2on") {
    bulb2on();
  } else if(s=="bulb2off") {
    bulb2off();
  }
 }
}

void bulb1on() {
  digitalWrite(bulb1,0);
}

void bulb1off() {
  digitalWrite(bulb1,1);
}

void bulb2on() {
  digitalWrite(bulb2,0);
}

void bulb2off() {
  digitalWrite(bulb2,1);
}

#define fan 2
#define bulb 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(fan, OUTPUT);
  pinMode(bulb, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() == 1)
  {
    String val = Serial.readString();
    Serial.println(val);
    if(val == "switch off")
    {
      digitalWrite(fan, HIGH);
    }
    if(val == "switch on")
    {
      digitalWrite(fan, LOW);
    }
    if(val == "bulb off")
    {
      digitalWrite(bulb, HIGH);
    }
    if(val == "bulb on")
    {
      digitalWrite(bulb, LOW);
    }
    if(val == "all close")
    {
      digitalWrite(fan, HIGH);
      digitalWrite(bulb, HIGH);
    }
    if(val == "all on")
    {
      digitalWrite(bulb, LOW);
      digitalWrite(fan, LOW);
    }
  }
}
const int ledpin=12;
const int buttonpin=2;
int buttonstate=1;
void setup()
{ 
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT); 
}
void loop()
{
  buttonstate=digitalRead(buttonpin);
 if(buttonstate==LOW)
  {
    digitalWrite(ledpin,HIGH);
  }
 else
 {
    digitalWrite(ledpin,LOW);
 }
}
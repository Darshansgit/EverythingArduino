
const int buttonP=4;
const int ledP=5;


bool prevStat=HIGH;

int counter=0;

void setup() 
{
Serial.begin(9600);
  pinMode(buttonP, INPUT_PULLUP);
  pinMode(ledP, OUTPUT);
}
void loop() 
{
  if(debounce(prevStat)==HIGH && prevStat==LOW)
  {
    counter++;
    prevStat=HIGH;
    Serial.println(counter);

  }
  else if(debounce(prevStat)==LOW && prevStat==HIGH ){
    
        prevStat=LOW;
      
  }
    if(counter == 5)
  {
    digitalWrite(ledP,HIGH);
  }

}
bool debounce (bool state)
  {
    bool currentstate=digitalRead(buttonP);
    if(currentstate!=state)
    {
      delay(10);
      currentstate=digitalRead(buttonP);
    }
    return currentstate;
  }   



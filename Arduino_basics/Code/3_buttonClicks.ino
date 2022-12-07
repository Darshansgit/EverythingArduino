int buttonP=4;
bool currentstate;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonP, INPUT_PULLUP);
  }

void loop() {

  if( debounce(currentstate) ==LOW )
  {
    Serial.println("apple");
    while(debounce(currentstate)==LOW)
    {

    }
  }
  else 
  {
  }
}

boolean debounce (bool state)
{
    bool currentstate1=digitalRead(buttonP);
    if(currentstate1!=state)
    {
      delay(10);
      currentstate1=digitalRead(buttonP);
    }
    return currentstate1;
}



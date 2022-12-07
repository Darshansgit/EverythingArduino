
int buttonPin=4;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
    bool state=digitalRead(buttonPin);
    Serial.println(state);
}

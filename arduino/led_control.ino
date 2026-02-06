nt ledPin = 13;
int buttonPin = 2;
int buttonState = 0;
bool ledState = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

  
  digitalWrite(ledPin, HIGH);
  delay(1000);   
  digitalWrite(ledPin, LOW);
  delay(1000);

  
  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH){
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(300); 
  }

}

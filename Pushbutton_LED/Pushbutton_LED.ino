const int buttonPin = 2;
const int ledPin =  13;
int buttonState = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);  // Set pushbutton pin as input
}
void loop() {
buttonState = digitalRead(buttonPin); // Read input from pin 2
if (buttonState == HIGH) { // If pushbutton is pressed, set as HIGH
    digitalWrite(ledPin, HIGH); // Turn on LED
  }
  else {
    digitalWrite(ledPin, LOW);  // Otherwise, turn off LED
} }

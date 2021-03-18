 //A quick program to detect how long a button is pressed for
 
 int buttonState = 0;
 int lastButtonState = 0;
 int startPressed = 0;
 int holdTime = 0;
 int concurrentTimer=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, INPUT_PULLUP);//Push-Button
}

void loop() {
  buttonState=digitalRead(pin)
  
  if (buttonState != lastButtonState)//if the button state has changed run our update method
    {
      if (buttonState == LOW)//if button was just pressed
       {
           startPressed = millis();
        }
    }
    lastButtonState = buttonState;

    if (buttonState == LOW)
    {
      int concurrentTimer = millis();
      holdTime=concurrentTimer-startPressed;
    }

}

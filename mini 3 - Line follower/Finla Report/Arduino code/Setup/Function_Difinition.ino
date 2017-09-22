// Function Defi
void right() {
  analogWrite(Lmotor,Lspeed);
  analogWrite(Rmotor,0);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in2, LOW);
  
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;
    if ( digitalRead(RSensor)==LOW && digitalRead(LSensor)==LOW ){
     //orward();
    }
  else if ( digitalRead(RSensor)==LOW && digitalRead(LSensor)==HIGH ){
    //left ();
    } 
}

void left() {
  analogWrite(Lmotor,0);
  analogWrite(Rmotor,Rspeed);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in2, LOW);
}

void forward() {
  analogWrite(Lmotor,100);
  analogWrite(Rmotor,100);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in2, LOW);
}

void Stop() {
  analogWrite(Lmotor,0);
  analogWrite(Rmotor,0);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in2, LOW);
}

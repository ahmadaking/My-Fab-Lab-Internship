
void loop() {
  // put your main code here, to run repeatedly:
  if ( digitalRead(RSensor)==LOW && digitalRead(LSensor)==LOW ){
     forward();
  }
  else if ( digitalRead(RSensor)==LOW && digitalRead(LSensor)==HIGH ){
    left ();
  }
  else if ( digitalRead(RSensor)==HIGH && digitalRead(LSensor)==LOW ){
    right ();
  }
  else {
    Stop ();
  }
}

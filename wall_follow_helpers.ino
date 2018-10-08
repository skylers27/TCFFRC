void setspeed(int s)
{
  analogWrite(speedL, s);
  analogWrite(speedR, s);
}
void brakeON()
{
  digitalWrite(directionL, LOW);
  digitalWrite(directionR, LOW);
  setspeed(0);

}
void brakeOFF()
{
  digitalWrite(directionL, LOW);
  digitalWrite(directionR, LOW);
  setspeed(100);
}
void forward()
{
  brakeOFF();
  
  setspeed(100);
}
void backward()
{
  brakeOFF();
  digitalWrite(directionL, HIGH);
  digitalWrite(directionR, HIGH);
  setspeed(100);
}
void rotateLeft()
{
  digitalWrite(directionL, HIGH);
  digitalWrite(directionR, LOW);
  setspeed(100);
  
}
void rotateRight()
{
  digitalWrite(directionL, LOW);
  digitalWrite(directionR, HIGH);
  setspeed(100);
  delay(200);
}
void slightLeft(int velocity)
{
  brakeON();
  analogWrite(speedL, .50 * velocity);
  analogWrite(speedR, velocity);
  delay(100);
}
void slightRight(int velocity)
{
  brakeON();
  analogWrite(speedL, velocity);
  analogWrite(speedR ,.50 * velocity);
  delay(100);
}

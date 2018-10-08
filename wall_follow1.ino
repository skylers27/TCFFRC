int directionL = 4;
int speedL = 5;
int directionR = 7;
int speedR = 6;
int photoL = A6;
int photoR = A0;
int photoB = A7;
int sharpL = A3;
int sharpM = A1;
int sharpR = A2;
int ir = A4;
int sound = A5;
int flameLED = 3;
int soundLED = 4;
int sd = 150;
int xf = 500;
int xr = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  digitalWrite(directionL, LOW);
  digitalWrite(directionR, LOW);
  pinMode(flameLED, OUTPUT);
  pinMode(soundLED, OUTPUT);
}

void loop() {
int soundval = analogRead(sound);
  if (soundval<10){
    digitalWrite(soundLED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(soundLED, LOW);
  }
int flameval = analogRead(ir); 
  if (flameval<100){
    digitalWrite(flameLED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(flameLED, LOW);
  }
  
  //analogWrite(speedL,sd);
  //analogWrite(speedR,sd);
  int distanceM;
  int distanceL;
  int distanceR;
   //put your main code here, to run repeatedly:
  distanceM = analogRead(sharpM);
  distanceL = analogRead(sharpL);
  distanceR = analogRead(sharpR);

Serial.println(distanceM);

  
  if (distanceM>450)
  {

    rotateLeft();
    
  }
  else
  {
        
    if (distanceR>300)
    {
      slightLeft(sd);
    }
    else if (distanceR<300 && distanceR>100)
    {
       forward();
    }
    else if (distanceR<100)
    {
      slightRight(sd);
    }
    }
    
    
    delay(100);
  
} 
 
 

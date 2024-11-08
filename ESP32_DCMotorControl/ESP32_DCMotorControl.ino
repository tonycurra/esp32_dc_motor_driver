int IN1 = 1; 
int IN2 = 2; 

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);


  Serial.begin(9600);
}
void loop()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(5000);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(2000);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(5000);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(2000);
  
}

/*This code is intended to create a simple automated watering system utilizing 
 * HW-390 capacitive moisture sensors and 3.3V water pumps with SRD-3VDC-SL-C
 * relays controling them. Future implimentation will have a resivoir float switch
 * along with a bluetooth controlled intdicator system utilizing the MIT app
 * inventor software.
 */
//INPUTS
int sageIN = A0;
int SAGE = 0;
int birdIN = A1;
int BIRD = 0;
int jalapIN = A2;
int JALAP = 0;
int habaIN = A3;
int HABA = 0;
int tomIN = A4;
int TOM = 0;

//OUTPUTS
int sageOUT = 2;
int birdOUT = 3;
int jalapOUT = 4;
int habaOUT = 5;
int tomOUT = 6;

void setup() {
  Serial.begin(9600);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);


}

void loop() {
 SAGE = analogRead(sageIN);
 Serial.print("SAGE = ");
 Serial.println(SAGE);
 if (SAGE > 500){
  digitalWrite(sageOUT, HIGH);
  delay(3000);
  }
  else{
  digitalWrite(sageOUT, LOW);
  
 }
 
 BIRD = analogRead(birdIN);
 Serial.print("BIRD = ");
 Serial.println(BIRD);
 if (BIRD > 500){
  digitalWrite(birdOUT, HIGH);
  delay (3000);
  digitalWrite(birdOUT, LOW);
  delay (10000);
 }
 
 JALAP = analogRead(jalapIN);
 Serial.print("JALAP = ");
 Serial.println(JALAP);
 if (JALAP > 500){
  digitalWrite(jalapOUT, HIGH);
  delay (3000);
  digitalWrite(jalapOUT, LOW);
  delay (10000);
 }
 
 HABA = analogRead(habaIN);
 Serial.print("HABA = ");
 Serial.println(HABA);
 if (HABA > 500){
  digitalWrite(habaOUT, HIGH);
  delay (3000);
  digitalWrite(habaOUT, LOW);
  delay (10000);
 }
 
 TOM = analogRead(tomIN);
 Serial.print("TOM = ");
 Serial.println(TOM);
 if (TOM > 500){
  digitalWrite(tomOUT, HIGH);
  delay (3000);
  digitalWrite(tomOUT, LOW);
  delay (10000);
 }
 else{delay (3000);}
 Serial.println("------------------");

 

}

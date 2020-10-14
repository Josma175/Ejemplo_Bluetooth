///Conexión TX y RX por default del Arduino a ocupar
//Conectamos después con la app
char SerialL = ""; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 if (Serial.available()) { 
    SerialL = Serial.read(); 
    // SerialL = Serial.readString();
    Serial.print(SerialL);
  }
}

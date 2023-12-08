const int ledVerde = 8;
const int ledAmarelo = 9;
const int ledVermelho = 10;

void setup() {
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVermelho,OUTPUT);
}

void loop() {    
  digitalWrite(ledVerde, HIGH);   
  delay(3000); 
  digitalWrite(ledVerde, LOW);
  delay(100);  

  digitalWrite(ledAmarelo, HIGH);   
  delay(1000); 
  digitalWrite(ledAmarelo, LOW);
  delay(100);  

  digitalWrite(ledVermelho, HIGH);   
  delay(3000); 
  digitalWrite(ledVermelho, LOW);
  delay(100);   
}

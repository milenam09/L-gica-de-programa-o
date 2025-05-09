// C++ code
//variaveis
int numero1, numero2;
  
void setup()
{
  Serial.begin(9600);
}


void loop()
{
 Serial.println("digite o primeiro numero ");
 while( !Serial.available());
 numero1 = Serial.parseInt();
  
 Serial.println("digite o primeiro numero ");
 while( !Serial.available());
 numero1 = Serial.parseInt(); 
 
 Serial.println("Primeiro numero: " + String(numero1));
 Serial.println("Segundo numero: " + String(numero2));
  
  if( numero1 > numero2 ){
    Serial.println("O primeiro numero e o maior");
  } else {
    Serial.println("O segundo numero e maior");
  }
   delay(15000); 
}
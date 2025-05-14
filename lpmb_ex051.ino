// Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.

//Declaração de variaveis
float centimetros = 0;

void setup()
{

  Serial.begin(9600);
}

void loop()
{
 
  //pedir os centimetros para o usuario
  
   Serial.println("Qual sao os centimetros?");//mostra uma mensagem na tela (via serial)
   while( ! Serial.available() );//espera o usuário digitar
   centimetros = Serial.parseInt();//transofrma o centimetro digitado em número 
   
  float polegadas = centimetros/2.54;
  
  //exibir os dados na serial 
  Serial.println("medida em polegadas : " + String (polegadas) );
  
}
 
// C++ code
//

String cor = "";

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite a cor");
  while( ! Serial.available() );
  cor = Serial.readString ();

  if(cor=="verde"){//se retornar verdadeiro losango sim
    Serial.println("siga");
  }else {//falso - losango nao 
    
    Serial.println("Pare");
  }
  delay(6000);
}
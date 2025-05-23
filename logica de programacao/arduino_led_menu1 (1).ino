
int ledIntegradoVerde = 13;
int ledIntegradoVermelho = 9;
int ledIntegradoAmarelo = 6;
int escolhaDosLeds;




void setup()
{

  pinMode(ledIntegradoVerde, OUTPUT);
  pinMode(ledIntegradoVermelho, OUTPUT);
  pinMode(ledIntegradoAmarelo, OUTPUT); 
  Serial.begin(9600);

  do{

    Serial.println(" ");
    Serial.println(" ");
    Serial.println("--- Jogo Escolha Dos Leds!! --- ");
    Serial.println(" ");
    Serial.println(" "); 
    Serial.println("Escolha um Numero de 1 a 8 !!");
    Serial.println("1 Ligar Led Verde");  
    Serial.println("2 Desligar Led Verde"); 
    Serial.println("3 Ligar Led Amarelo "); 
    Serial.println("4 Desligar Led Amarelo"); 
    Serial.println("5 Ligar Led Vermelho "); 
    Serial.println("6 Desligar Led Vermelho"); 
    Serial.println("7 Ligar Todos os Leds"); 
    Serial.println("8 Desligar Todos os Leds "); 
    while(!Serial.available());
    escolhaDosLeds = Serial.parseInt();
    
    
    switch(escolhaDosLeds){
      case 1:
      digitalWrite(ledIntegradoVerde, HIGH);
      Serial.println("Ligar Led Verde");
      break;


      case 2:
      digitalWrite(ledIntegradoVerde, LOW);
      Serial.println("Desligar Led Verde");
      break;


      case 3:
      digitalWrite(ledIntegradoAmarelo, HIGH);
      Serial.println("Ligar Led Amarelo");
      break;

      case 4:
      digitalWrite(ledIntegradoAmarelo, LOW);
      Serial.println("Desligar Led Amarelo");
      break;

      case 5:
      digitalWrite(ledIntegradoVermelho, HIGH);
      Serial.println("Ligar Led Vermelho");
      break;

      case 6:
      digitalWrite(ledIntegradoVermelho, LOW);
      Serial.println("Desligar Led Vermelho");
      break;

      case 7: 
      digitalWrite(ledIntegradoVerde, HIGH);
      digitalWrite(ledIntegradoAmarelo, HIGH);
      digitalWrite(ledIntegradoVermelho, HIGH);
      Serial.println("Ligar todos os Leds");
      break;

      case 8:  
      digitalWrite(ledIntegradoVerde, LOW);
      digitalWrite(ledIntegradoAmarelo, LOW);
      digitalWrite(ledIntegradoVermelho, LOW);
      Serial.println("Desligar Todos os Leds"); 
      break; 

      default:
      Serial.println("Opcao invalida! Escolha uma opcao do 1 a 8.;)"); 
    }  

  }
  while(escolhaDosLeds != 0);
}

void loop()
{




}
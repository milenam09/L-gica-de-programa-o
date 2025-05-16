int escolhaDaOperação;
float numero1;
float numero2;

void setup()
{
  Serial.begin(9600);
  
  int contador = 0; //Variavel inicializadora do 'do while'
    
    
  //\n e um entender via enter
  do{
  Serial.println("Bem Vindo(a) a calculadora mega blaster inteligente :P!!!\n");
  Serial.println("Esolha umas das operacoes");
  Serial.println("1 - Somar");  
  Serial.println("2 - Dividir");
  Serial.println("3 - Subtrair");
  Serial.println("4 - Multiplicar");
  while(!Serial.available()){}
  escolhaDaOperacao = Serial.parseInt();
    
    
    
  Serial.println("Para conseguirmos fazer a operacao matematica precisamos que voce digite 2 numeros");
  Serial.println("Digite o primeiro numero:");
  while(!Serial.available()){}
  numero1 = Serial.parseFloat();
    
     
  Serial.println("Agora, digite o segundo numero:");
  while(!Serial.available()){}
  numero2 = Serial.parseFloat();
    
  /* if(escolhaDaOperacao == 1){}
   else if (esolhaDaOperacao == 2){} 
   else if (esolhaDaOperacao == 3){}
   else if (esolhaDaOperacao == 4){}
  */
    
    switch(escolhaDaOperacao){
       case 1:
          break;
      
       case 2:
          break;
      
       case 3:
          break;
      
       case 4:
          break;
      
      default:
         Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4.;)");
    }
    
   Serial.println("Voce deseja voltar ao menu? Digite sim ou nao (em minusculo, por favor).");
   while(!Serial.available()){}
   //contador = Serial.parseFloat();
    
    if(Serial.readString) == "sim"){
      contador = 1;
    }
    else{
      contador = 0;
      Serial.println("Ate breve");
      Serial.println("Caso queira voltar ao menu, reinicie o programa;)");
    }
    
    
    
  }
    while();
}


void loop()
{
 //sem intrucoes 
}
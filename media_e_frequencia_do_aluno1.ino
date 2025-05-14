//Calcule a média entre DUAS notas.
//

// variaveis
int nota1 = 0;
int nota2 = 0;

void setup()
{
   Serial.begin(9600);
}


void loop()
{
 Serial.println("Informe a primeira nota");//informar uma mensagem na tela solicitando a nota
  while(! Serial.available());//pedir pro Arduino esperar o usuário digitar e dar o enter
  nota1 = Serial.parseInt();//aguardar o número digitado na variável
  
  Serial.println("Informe a segunda nota");//informar uma mensagem na tela solicitando a nota
  while(! Serial.available());//pedir pro Arduino esperar o usuário digitar e dar o enter
  nota1 = Serial.parseInt();//aguardar o número digitado na variável
  
   if( nota1 > nota2 ){
    Serial.println("A primeira nota esta na media");
  } else {
    Serial.println("A primeira nota e media");
     
     Serial.println("Se a nota for maior que 6 APROVADO");
  } else if( nota >= 6 && idade < 6) {//de 6 ate 10
    Serial.println("Filmes até classificação 14 anos");
  } else if( idade >= 14 && idade < 17) {//de 14 ate 17
  Serial.println("Todos os tipos de filmes");
  } else if( idade >= 18 && idade < 59) {//de 18 ate 59 
  Serial.println("Todos os tipos de filmes + desconto para idosos");
  } else if( idade >= 60) {//de 8 pra cima 
  Serial.println("Cadastrado na categoria Adulto");
  } else{//idades abaixo de 9 anos, ou seja de 8 pra baixo
    Serial.println("Apenas filmes infantis");
  Serial.println("Idade inválida, verifique os dados");
  } else if( idade >= 0 && idade < 120) 
     
     
  }
}
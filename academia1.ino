// C++ code
//Você foi contratado para programar o sistema de classificação etária do novo cinema da cidade. O sistema precisa verificar a idade do cliente e informar quais tipos de filmes ele pode assistir.

void setup()
{ 
  int idade = 0;
  
    Serial.println("Informe a idade");//informar uma mensagem na tela solicitando a idade
 while(! Serial.available());//pedir pro Arduino esperar o usuário digitar e dar o enter
 idade = Serial.parseInt();//aguardar o número digitado na variável
    
  Serial.begin(9600);
  
  Serial.println("Clasificatoria dos filmes");
  Serial.println();
  
  Serial.println("A pessoa tem " + String(idade) + "Anos");
  //idade = 8
  if(idade >= 9 && idade < 10){//de 9 ate 10
    Serial.println("Filmes infantis e infantojuvenis");
  } else if( idade >= 10 && idade < 13) {//de 10 ate 13
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
 

void loop()
{
 
}
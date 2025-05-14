//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Declaração de Variáveis
long idade = 0;
long idadeSemanas =0;

  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite sua idade em anos");
  while( !Serial.available());// espera o usuario dar <enter>
  idade = Serial.parseInt();//transforma a idade digitada em numero
  
  //Processamento
  idadeSemanas = idade * 52, 1786;

  //Saída
  Serial.println("Idade em Semanas: " + String(idadeSemanas) );//imprime o texto
  
  delay(1000);
}
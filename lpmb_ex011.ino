//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Declaração de Variáveis
float idade = 0;
float idadeMeses =0;
float idadeDias = 0;
float idadeHoras=0;
float idadeMinutos = 0;
  
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
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idade* 24; 
  idadeMinutos = idade * 60;
  //Saída
  Serial.println("Idade em Meses: " + String(idadeMeses) );//imprime o texto
  Serial.println("idade em dias: " + String(idadeDias) );//imprime o texto
  Serial.println("idade em horas: " + String(idadeHoras) );//imprime o texto
  Serial.println("idade em minutos: " + String(idadeMinutos) );//imprime o texto
  delay(1000);
}
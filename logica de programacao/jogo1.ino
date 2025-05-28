#include <Servo.h>

// Definições dos componentes
#define LED_Vermelho 10
#define LED_Verde 7
#define LED_Azul_1 2
#define LED_Azul_2 3
#define LED_AZUL_3 4
#define SERVO_PIN 12

Servo porta; // Objeto para controle do servo

int numeroSagrado;
int tentativas = 0;
int acertos = 0;
int portaAberta = false;

void setup() {
  // Configuração dos pinos
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AZUL_1, OUTPUT);
  pinMode(LED_AZUL_2, OUTPUT);
  pinMode(LED_AZUL_3, OUTPUT);
  
  porta.attach(SERVO_PIN); // Conecta o servo
  porta.write(0); // Porta fechada
  
  Serial.begin(9600);
  randomSeed(analogRead(0)); // Semente para números aleatórios
  
  // Mensagem inicial
  Serial.println("---------------------------------------");
  Serial.println("Bem-vindo a Fortaleza do Dado Sagrado!");
  Serial.println("---------------------------------------");
  Serial.println("Adivinhe o numero sagrado (1-6) para provar seu valor!");
  Serial.println("Acumule 3 acertos para abrir a Porta da Sabedoria!");
}

void loop() {
  if (!portaAberta) {
    // Gera novo número sagrado
    numeroSagrado = random(1, 7);
    Serial.println("\nUm novo numero sagrado foi escolhido...");
    Serial.println("Digite seu palpite (1-6):");
    
    // Aguarda palpite do jogador
    while (!Serial.available());
    int palpite = Serial.parseInt();
    while (Serial.available()) Serial.read();
    
    // Verifica palpite
    if (palpite < 1 || palpite > 6) {
      Serial.println("Palpite invalido! Digite um numero entre 1 e 6.");
    } else if (palpite == numeroSagrado) {
      // Acerto
      acertos++;
      Serial.println("\n*** CORRETO! Voce e digno! ***");
      
      // Pisca LED verde
      for (int i = 0; i < 3; i++) {
        digitalWrite(LED_VERDE, HIGH);
        delay(300);
        digitalWrite(LED_VERDE, LOW);
        delay(300);
      }
      
      // Acende joias azuis conforme acertos
      switch (acertos) {
        case 1:
          digitalWrite(LED_AZUL_1, HIGH);
          break;
        case 2:
          digitalWrite(LED_AZUL_2, HIGH);
          break;
        case 3:
          digitalWrite(LED_AZUL_3, HIGH);
          break;
      }
      
      // Verifica se completou os 3 acertos
      if (acertos >= 3) {
        abrirPorta();
      }
    } else {
      // Erro
      Serial.println("\nINCORRETO! O numero sagrado era: " + String(numeroSagrado));
      Serial.println("Tente novamente, aventureiro!");
      
      // Pisca LED vermelho
      for (int i = 0; i < 3; i++) {
        digitalWrite(LED_VERMELHO, HIGH);
        delay(300);
        digitalWrite(LED_VERMELHO, LOW);
        delay(300);
      }
    }
    
    tentativas++;
    Serial.println("Acertos: " + String(acertos) + "/3 | Tentativas: " + String(tentativas));
  }
}

void abrirPorta() {
  portaAberta = true;
  Serial.println("\n*** PARABENS! ***");
  Serial.println("Voce provou seu valor e dominou a sabedoria do dado!");
  Serial.println("A Porta da Sabedoria se abre para voce!");
  
  // Efeito de abertura da porta
  for (int pos = 0; pos <= 90; pos++) {
    porta.write(pos);
    delay(15);
  }
  
  // Pisca todos os LEDs em celebração
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_VERDE, HIGH);
    digitalWrite(LED_AZUL_1, HIGH);
    digitalWrite(LED_AZUL_2, HIGH);
    digitalWrite(LED_AZUL_3, HIGH);
    delay(200);
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_AZUL_1, LOW);
    digitalWrite(LED_AZUL_2, LOW);
    digitalWrite(LED_AZUL_3, LOW);
    delay(200);
  }
  
  // Mantém porta aberta e joias acesas
  digitalWrite(LED_AZUL_1, HIGH);
  digitalWrite(LED_AZUL_2, HIGH);
  digitalWrite(LED_AZUL_3, HIGH);
}

 void setup() {
 Serial.begin(9600);
  
 Serial.println("Digite o numero da tabuada escolhida (1-10):");
}

 void loop() {
 if (Serial.available() > 0) {
 int numero = Serial.parseInt(); // Leia o número digitado
    
 if (numero >= 1 && numero <= 10) {
 Serial.print("Tabuada do ");
 Serial.println(numero);
      
 int contador = 1;
 while (contador <= 10) {
 int resultado = numero * contador;
 Serial.print(numero);
 Serial.print(" x ");
 Serial.print(contador);
 Serial.print(" = ");
 Serial.println(resultado);
        
 contador++;
 delay(500);
 }
      
 Serial.println("Digite outro numero (1-10) para nova tabuada:");
 } else {
 Serial.println("Numero invalido! Digite um numero entre 1 e 10.");
 }
    
 while (Serial.available() > 0) {
 Serial.read();
    }
  }
}
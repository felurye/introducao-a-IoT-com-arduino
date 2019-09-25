unsigned int valorLido; // Declaração de variável.

void setup(){ // Esta função "setup" roda uma vez quando a placa e ligada ou resetada.
  Serial.begin(9600); // Inicia porta serial e define a velocidade de transmissão. 
} 

void loop(){  // Função que se repete infinitamente quando a placa é ligada.
  valorLido = analogRead(A0); // Atribui a variável o valor lido do pino passado por parâmetro.
  Serial.println(valorLido); // Imprime no monitor serial o valor lido.
  delay(1000); // Espera um segundo.
}

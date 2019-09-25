
const int botao = 2; // Variável que guarda em que pino o botão está conectado.
const int led = 3; // Variável que guarda em que pino o LED está conectado.
int estadoBotao = 0; // Variável para guardar o valor do estado do botão (pressionado ou não).

void setup() {                          
  Serial.begin(9600); // Inicialização do monitor serial.
  pinMode(led, OUTPUT); // Inicialização do pino do led como saída (OUTPUT).
  pinMode(botao, INPUT); // Inicialização do pino do botão como entrada .  
}

void loop() {               
  estadoBotao = digitalRead(botao); // Lê o estado do botão (que pode ser 0 ou 1).
  
  if (estadoBotao == 1) { // Checa o estado do botão. Se estiver apertado (1):
    digitalWrite(led, 1); // Acende o LED.
    Serial.println("1"); // Imprime "1" no monitor serial.
  } else { // Senão:
    digitalWrite(led, 0); // Apaga o LED.
    Serial.println("0"); // Imprime "0" no monitor serial.
  }
}

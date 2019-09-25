
int led = 13; //Declaração de variável, que neste caso, está referenciando o pino onde o LED está conectado.

void setup(){ //Essa função é executada somente uma vez, e é responsável por setar todos os pinos.
  pinMode(led, OUTPUT); //Inicialização do pino onde o LED está conectado, com definição de saída (OUTPUT).
}

void loop(){ //Essa função é executada até que o código seja encerrado.
  
 digitalWrite(led, HIGH); //Função responsável por acender ou apagar o LED, nesse caso estamos passando 13
 //(valor onde está referenciado na variável led), e HIGH, que é responsável por acende-lo.
 delay(1000); //Função de espera, marcada em milisegundo.
 digitalWrite(led, LOW); //O LOW é resposável por apagar o led.
 delay(1000); 
}

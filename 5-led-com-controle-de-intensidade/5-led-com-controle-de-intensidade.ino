/*  =============== EXPLICAÇÃO ===============   */

/*
Neste programa estamos usando uma técnica, de transformar saídas digitais em analógicas, isto é, ao invés de poder ser lido
apenas dois estados do led (no nosso caso), podemos ler 256 -> entre 0 à 225. Esse valor está sendo lindo por meio da função
analogRead, que é resposável por ler o valor do potenciometro, que pode varias entre 0 à 1023, e com o auxilio da função map
o valor pode ser convertido, assim mudando a intensidade em que o led fica ligado.
*/

int led = 9;
unsigned int valorLido;
unsigned int pwm;

void setup() { // Esta função "setup" roda uma vez quando a placa e ligada ou resetada.
 pinMode(led, OUTPUT); // Configura o pino do led (digital) como saída.
}

void loop() { // Função que se repete infinitamente quando a placa é ligada.
  valorLido = analogRead(A0); // Valor entre 0 e 1024.
  pwm = map(valorLido, 0, 1023, 0, 255); // Mudança de escala.
  analogWrite(led, pwm);//Escreve no led um sinal PWM proporcional ao valorLido.
}

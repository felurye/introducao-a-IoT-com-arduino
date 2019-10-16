//Programa: Som no Arduino - Do Re Mi
//Autor: Arduino e Cia

#define DOH 262
#define RE 294
#define MI 330
#define FA 349
#define SOL 392
#define LA 440
#define SI 494
#define PINO 10


void setup() 
{
pinMode(10,OUTPUT); //Pino do buzzer
}

void loop()
{
    delay(2000);
    tone(PINO, DOH, 200); //DO
  
    delay(200);
    tone(PINO, RE, 300); //RE
  
    delay(200);
    tone(PINO, MI, 300); //MI
  
    delay(200);
    tone(PINO, FA, 300); //FA
  
    delay(300);
    tone(PINO, FA, 300); //FA
  
    delay(300);
    tone(PINO, FA, 300); //FA
  
    delay(300);
    tone(PINO, DOH, 100); //DO
  
    delay(200);
    tone(PINO, RE, 300); //RE
  
    delay(200);   
    tone(PINO, DOH, 100); //DO
  
    delay(200);
    tone(PINO, RE, 300); //RE
  
    delay(300);
    tone(PINO, RE, 300); //RE
  
    delay(300);
    tone(PINO, RE, 300); //RE
  
    delay(300);
    tone(PINO, DOH, 200); //DO
  
    delay(200);
    tone(PINO, SOL, 200); //SOL
  
    delay(200);
    tone(PINO, FA, 200); //FA
  
    delay(200);
    tone(PINO, MI, 300); //MI
  
    delay(300);
    tone(PINO, MI, 300); //MI
  
    delay(300);
    tone(PINO, MI, 300); //MI
  
    delay(300);
    tone(PINO, DOH, 200); //DO
  
    delay(200);
    tone(PINO, RE, 300); //RE
  
    delay(200);
    tone(PINO, MI, 300); //MI
  
    delay(200);
    tone(PINO, FA, 300); //FA
  
    delay(300);
    tone(PINO, FA, 300); //FA
  
    delay(300);
    tone(PINO, FA, 300); //FA
  
    delay(300);
}

/*---------- EXPLICAÇÃO ----------*/

/*
 * Com os valores definidos das fequências das notas músicais o buzzer executa
 * as mesmas a cada interação dentro do loop com auxilio da função tone
 * onde é passado por paremetro o pino onde o buzzer se encontra,
 * a intensidade do som que o buzzer fará e o tempo que ele executará a nota. 
 * E também temos a função delay, para esperar o tempo para a próxima nota.
*/

float seno;
int frequencia;  

void setup() { 
  pinMode(9,OUTPUT); //define o pino 9 como saída 
}   

void loop() { 
  
  for(int x=0;x<180;x++){
    seno=(sin(x*3.1416/180)); //converte graus para radiando e depois obtém o valor do seno     
    frequencia = 2000+(int(seno*1000)); //gera uma frequência a partir do valor do seno  
    tone(9,frequencia);  
    delay(2);  
  } 
}

/*---------- EXPLICAÇÃO ----------*/

/*
 * Nesse programa são feitos calculos por meio de valores de seno, com isso podemos gerar uma
 * frequencia para o buzzer executar. a cada interação dentro do for os calculos são gerados e
 * executados na função tone, onde é passado por paremetro o pino onde o buzzer se encontra
 * e a intensidade do som que o buzzer fará. E também temos a função delay, para mander o som executando
 * por um determinado tempo.
*/

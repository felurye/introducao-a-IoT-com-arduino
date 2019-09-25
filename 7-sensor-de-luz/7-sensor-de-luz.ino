
int ledPin = 9; //Led no pino 13
int ldrPin = A0; //LDR no pino analígico 8 int 
int ldrValor = 0; //Valor lido do LDR   

void setup() {  
  pinMode(ledPin,OUTPUT); //define a porta 7 como saída  
  Serial.begin(9600); //Inicia a comunicação serial 
}   


void loop() {    
    ldrValor = analogRead(ldrPin); //ler o valor do LDR
    //O valor lido será entre 0 e 1023    
    
    if (ldrValor>= 400){ //se o valor lido for maior ou igual à 800, liga o led 
      digitalWrite(ledPin,HIGH);  // senão, apaga o led  
    }else{ 
      //digitalWrite(ledPin,LOW);    //imprime o valor lido do LDR no monitor serial  
    }
    
    Serial.println(ldrValor);  
    delay(100); 
} 

/*========== EXPLICAÇÃO ==========*/
/* Nesse programa será lido em todo momento o valor gerado pelo LDR.
 * Por meio do if else pode ser controlado o LED, caso o valor lido
 * seja maior ou igual à 800, ou seja, haja muita luz, o led permanece 
 * apagado, senão, o LED acenderá.
 */

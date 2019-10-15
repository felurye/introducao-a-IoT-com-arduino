#include <Ultrasonic.h> //Inclui biblioteca no código.
Ultrasonic ultrassom(8,7); // define o nome do sensor(ultrassom) 
//e onde esta ligado o trig(8) e o echo(7) respectivamente   


  
void setup() {  // Esta função "setup" roda uma vez quando a placa e ligada ou resetada
  Serial.begin(9600); //Habilita Comunicação Serial a uma taxa de 9600 bauds.  long distancia;  
  } 
}
 
void loop()  {  // Função que se repete infinitamente quando a placa é ligada
  
  distancia = ultrassom.Ranging(CM); // ultrassom.Ranging(CM) retorna a distancia em                                
  // centímetros(CM) ou polegadas(INC)    
  
  Serial.print(distancia); 
  Serial.println("cm");  //imprime o valor da variável distancia    
  
  delay(100);  
} 

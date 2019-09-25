//Sensor de temperatura usando o LM35   

const int LM35 = A0; // Define o pino que lera a saída do LM35 
float temperatura; // Variável que armazenará a temperatura medida   


void setup(){ //Função que será executada uma vez quando ligar ou resetar o Arduino 
  Serial.begin(9600); // inicializa a comunicação serial 
}    

  
void loop() { //Função que será executada continuamente
  
    temperatura = (float(analogRead(LM35))*5/(1023))/0.01; //Faz a leitura do sensor, convertendo para float e logo em seguida faz
    //calculos para exibir o valor em Celsius.
    Serial.print("Temperatura: ");
    Serial.println(temperatura); //Imprime na tela o valor atribuido a variavel, por meio da leitura do sensor. 
    delay(2000); 
}


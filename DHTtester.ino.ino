// DHTlib - Version: Latest 
#include <dht.h>

//Mapeamento de Hardware
int dht_pin = 5;

//Variaveis Globais
int temp = 0x00, umidade = 0x00;

//Declaração de Ojetos
dht  my_dht; //Objeto para o sensor


void setup() {
  Serial.begin(9600);
}

void loop() {
  my_dht.read11(dht_pin);
  temp = my_dht.temperature;
  umidade = my_dht.humidity;
  
  Serial.print(temp);
  Serial.print(" ");
  Serial.print("\t");
  Serial.print(umidade);
  Serial.println("%");
  
  delay(1000);
}

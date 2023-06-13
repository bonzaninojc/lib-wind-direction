
# Biblioteca de leitura de direção de vento.

Esta biblioteca de Arduino foi desenvolvida para facilitar a medição da direção do vento em projetos que envolvem monitoramento climático, como estações meteorológicas caseiras ou dispositivos de controle baseados em vento.



Informações e recursos:
- Inicialização do sensor de direção do vento.
- Possibilita o uso de larga escala em projetos.
- Os dados fornecidos são em graus.




## Como instalar

![App Screenshot](https://www.robocore.net/upload/tutoriais/32_img_2_H.png)


## Como utilizar

```
#include "lib_wind_direction.h"

// Defina o pino ao qual o sensor de direção do vento está conectado
const int WIND_DIRECTION_PIN = A0;

// Crie uma instância da classe LibWindDirection
LibWindDirection windDirectionSensor(WIND_DIRECTION_PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Leia a direção do vento
  int windDirection = windDirectionSensor.readWindDirection();

  // Faça algo com os dados lidos, como imprimir no monitor serial
  Serial.print("Direção do vento: ");
  Serial.println(windDirection);

  // Aguarde um intervalo antes de ler novamente (opcional)
  delay(1000);
}
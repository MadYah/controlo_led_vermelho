/*****************************************************************
* Programador: (c) Pedro Ferreira
* Data.......: 11/12/2024
* Observações: Segundo laboratório de SDAC.
*
*                                     Controlo de um led vermelho.
*****************************************************************/

// Constantes
const int PING_LED = 7;
const int TEMPO_ESPERA_MS = 1000;

// Inicializações
void setup(void) {
  pinMode(PING_LED, OUTPUT);
}

//Programa principal
void loop(void)  {
  digitalWrite(PING_LED, HIGH);
  delay(TEMPO_ESPERA_MS);
  digitalWrite(PING_LED, LOW);
  delay(TEMPO_ESPERA_MS);
}
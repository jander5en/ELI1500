//Lab øvelse 1 i ELI 1500. Samarbeid med Sindre Bergvik Ødegård.

void ISR_Main()
{

  intervalMainButton = millis();

  digitalWrite(mainPedLed, HIGH);

  mainPedLedStatus = 1;

  Serial.println("ISR - Mainroad initiated at: ");
  Serial.println(intervalMainButton);


}

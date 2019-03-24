//Lab øvelse 1 i ELI 1500. Samarbeid med Sindre Bergvik Ødegård.

void ISR_Side()
{

  intervalSideButton = millis();

  digitalWrite(sidePedLed, HIGH);

  sidePedLedStatus = 1;

  Serial.println("ISR - Sideroad initiated at: ");
  Serial.println(intervalMainButton);
  
}

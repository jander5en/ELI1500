//Lab øvelse 1 i ELI 1500. Samarbeid med Sindre Bergvik Ødegård.

const int ledPinRedMain      = 13, ledPinRedSide    = 10;                // Assigning constant variables to pins and so forth.
const int ledPinYellowMain   = 12, ledPinYellowSide = 9;
const int ledPioGreenMain    = 11, ledPinGreenSide  = 8;

const int mainButton  = 2,  sideButton  = 3;

const int mainPedLed  = 5,  sidePedLed  = 6;

unsigned long intervalMain, intervalWait, intervalSide, intervalRed, intervalGreen;
unsigned long startMillis, currentMillis, prevMillis, deltaTimeLoop, newMillis;
unsigned long intervalPLedMain, intervalPLedSide;
unsigned long intervalMainButton, intervalSideButton;

int mainPedLedStatus = 0, sidePedLedStatus = 0;

void setup()
{

  Serial.begin(9600);

  attachInterrupt(digitalPinToInterrupt(sideButton), ISR_Side, RISING);    // Defining ISR's.
  attachInterrupt(digitalPinToInterrupt(mainButton), ISR_Main, RISING);

  pinMode(mainButton, INPUT);                                           // Defining I/O's.
  pinMode(sideButton, INPUT);

  pinMode(mainPedLed, OUTPUT);
  pinMode(ledPinRedMain, OUTPUT);
  pinMode(ledPinYellowMain, OUTPUT);
  pinMode(ledPioGreenMain, OUTPUT);

  pinMode(sidePedLed, OUTPUT);
  pinMode(ledPinGreenSide, OUTPUT);
  pinMode(ledPinYellowSide, OUTPUT);
  pinMode(ledPinRedSide, OUTPUT);

  digitalWrite(mainPedLed, LOW);
  digitalWrite(sidePedLed, LOW);

  intervalWait  = 5000;
  intervalSide  = 10000;
  intervalMain  = 10000;
  intervalGreen = 10000;
  intervalRed   = 10000;

  startMillis = millis();

}

void loop()
{

  for (int i = 0; i <= 3; i++)
  {

    if (mainPedLedStatus == 1 && sidePedLedStatus == 1)   //If loop to check if pedestrian LED is HIGH or LOW.
    {

      digitalWrite(mainPedLed, LOW);
      digitalWrite(sidePedLed, LOW);

      mainPedLedStatus = 0;
      sidePedLedStatus = 0;

      i = 4;

    }

    else if (mainPedLedStatus == 1 && sidePedLedStatus == 0)
    {

      digitalWrite(mainPedLed, LOW);

      mainPedLedStatus = 0;

      i = 5;

    }

    else if (mainPedLedStatus == 0 && sidePedLedStatus == 1)
    {

      digitalWrite(sidePedLed, LOW);

      sidePedLedStatus = 0;

      i = 6;

    }

    else if (mainPedLedStatus == 0 && sidePedLedStatus == 0)
    {

      i = i;

      intervalWait  = 5000;
      intervalSide  = 10000;
      intervalMain  = 10000;
      intervalGreen = 10000;
      intervalRed   = 10000;

    }

    switch (i)     // Switching between Green, Yellow and Red depending on certain variables and criterias.
    {
      case 0 :    // Yellow lights.
        digitalWrite(ledPinRedMain, LOW);
        digitalWrite(ledPinYellowMain, HIGH);
        digitalWrite(ledPioGreenMain, LOW);

        digitalWrite(ledPinRedSide, LOW);
        digitalWrite(ledPinYellowSide, HIGH);
        digitalWrite(ledPinGreenSide, LOW);

        delay(intervalWait);

        break;

      case 1 :    // Green for walking over mainroad.
        digitalWrite(ledPinRedMain, LOW);
        digitalWrite(ledPinYellowMain, LOW);
        digitalWrite(ledPioGreenMain, HIGH);

        digitalWrite(ledPinRedSide, HIGH);
        digitalWrite(ledPinYellowSide, LOW);
        digitalWrite(ledPinGreenSide, LOW);

        delay(intervalMain);

        break;

      case 2 :    // Yellow lights.
        digitalWrite(ledPinRedMain, LOW);
        digitalWrite(ledPinYellowMain, HIGH);
        digitalWrite(ledPioGreenMain, LOW);

        digitalWrite(ledPinRedSide, LOW);
        digitalWrite(ledPinYellowSide, HIGH);
        digitalWrite(ledPinGreenSide, LOW);

        delay(intervalWait);

        break;

      case 3 :    // Green for walking over sideroad.
        digitalWrite(ledPinRedMain, HIGH);
        digitalWrite(ledPinYellowMain, LOW);
        digitalWrite(ledPioGreenMain, LOW);

        digitalWrite(ledPinRedSide, LOW);
        digitalWrite(ledPinYellowSide, LOW);
        digitalWrite(ledPinGreenSide, HIGH);

        delay(intervalSide);

        break;

      case 4 :    // If both buttons are pressed.
        if ((intervalMainButton - currentMillis) > (intervalSideButton - currentMillis))    // If Mainroad buttons time interval is bigger, it was pressed last.
        {
          for (int k_4 = 0; k_4 <= 3; k_4++)
          {
            switch (k_4)
            {
              case 0 :
                digitalWrite(ledPinRedMain, LOW);   // Yellow lights.
                digitalWrite(ledPinYellowMain, HIGH);
                digitalWrite(ledPioGreenMain, LOW);

                digitalWrite(ledPinRedSide, LOW);
                digitalWrite(ledPinYellowSide, HIGH);
                digitalWrite(ledPinGreenSide, LOW);

                delay((intervalWait) / 2);

                break;

              case 1 :

                digitalWrite(ledPinRedMain, HIGH);    // Sideroad greenlight for walking.
                digitalWrite(ledPinYellowMain, LOW);
                digitalWrite(ledPioGreenMain, LOW);

                digitalWrite(ledPinRedSide, LOW);
                digitalWrite(ledPinYellowSide, LOW);
                digitalWrite(ledPinGreenSide, HIGH);

                delay(intervalSide);

                break;

              case  2 :

                digitalWrite(ledPinRedMain, LOW);   // Yellow lights.
                digitalWrite(ledPinYellowMain, HIGH);
                digitalWrite(ledPioGreenMain, LOW);

                digitalWrite(ledPinRedSide, LOW);
                digitalWrite(ledPinYellowSide, HIGH);
                digitalWrite(ledPinGreenSide, LOW);

                delay(intervalWait);

                break;

              case 3 :
                digitalWrite(ledPinRedMain, LOW);   // Mainroad greenlight for walking.
                digitalWrite(ledPinYellowMain, LOW);
                digitalWrite(ledPioGreenMain, HIGH);

                digitalWrite(ledPinRedSide, HIGH);
                digitalWrite(ledPinYellowSide, LOW);
                digitalWrite(ledPinGreenSide, LOW);

                delay(intervalMain);

                i = 0;

                break;
            }
          }
        }
        else if ((intervalMainButton - currentMillis) < (intervalSideButton - currentMillis))   // If Sideroad buttons time interval is bigger, it was pressed last.
        {
          for (int k_4_1 = 0; k_4_1 <= 3; k_4_1++)
          {
            switch (k_4_1)
            {
              case 0 :

                digitalWrite(ledPinRedMain, LOW);   // Yellow lights.
                digitalWrite(ledPinYellowMain, HIGH);
                digitalWrite(ledPioGreenMain, LOW);

                digitalWrite(ledPinRedSide, LOW);
                digitalWrite(ledPinYellowSide, HIGH);
                digitalWrite(ledPinGreenSide, LOW);

                delay(intervalWait / 2);

                break;

              case 1 :

                digitalWrite(ledPinRedMain, LOW);   // Mainroad greenlight for walking.
                digitalWrite(ledPinYellowMain, LOW);
                digitalWrite(ledPioGreenMain, HIGH);

                digitalWrite(ledPinRedSide, HIGH);
                digitalWrite(ledPinYellowSide, LOW);
                digitalWrite(ledPinGreenSide, LOW);

                delay(intervalMain);

                break;

              case 2:

                digitalWrite(ledPinRedMain, LOW);   // Yellow lights.
                digitalWrite(ledPinYellowMain, HIGH);
                digitalWrite(ledPioGreenMain, LOW);

                digitalWrite(ledPinRedSide, LOW);
                digitalWrite(ledPinYellowSide, HIGH);
                digitalWrite(ledPinGreenSide, LOW);

                delay(intervalWait);

                break;

              case 3 :

                digitalWrite(ledPinRedMain, HIGH);    // Sideroad greenlight for walking.
                digitalWrite(ledPinYellowMain, LOW);
                digitalWrite(ledPioGreenMain, LOW);

                digitalWrite(ledPinRedSide, LOW);
                digitalWrite(ledPinYellowSide, LOW);
                digitalWrite(ledPinGreenSide, HIGH);

                delay(intervalSide);

                i = 0;

                break;
            }
          }
        }

        break;

      case 5 :    // If only Mainroad button are pressed.
        for (int k_5 = 0; k_5 <= 1; k_5++)
        {
          switch (k_5)     // Switching between Green, Yellow and Red depending on certain variables and criterias.
          {
            case 0 :    // Yellow lights.
              digitalWrite(ledPinRedMain, LOW);
              digitalWrite(ledPinYellowMain, HIGH);
              digitalWrite(ledPioGreenMain, LOW);

              digitalWrite(ledPinRedSide, LOW);
              digitalWrite(ledPinYellowSide, HIGH);
              digitalWrite(ledPinGreenSide, LOW);

              delay((intervalWait) / 2);
              Serial.println((intervalWait) / 2);

              break;

            case 1 :    // Green for walking over mainroad.
              digitalWrite(ledPinRedMain, LOW);
              digitalWrite(ledPinYellowMain, LOW);
              digitalWrite(ledPioGreenMain, HIGH);

              digitalWrite(ledPinRedSide, HIGH);
              digitalWrite(ledPinYellowSide, LOW);
              digitalWrite(ledPinGreenSide, LOW);

              delay(intervalMain);

              i = 0;

              break;

          }
        }

        break;

      case 6 :    // If only Sideroad button are pressed.
        for (int k_6 = 0; k_6 <= 1; k_6++)
        {
          switch (k_6)
          {
            case 0 :    // Yellow lights.
              digitalWrite(ledPinRedMain, LOW);
              digitalWrite(ledPinYellowMain, HIGH);
              digitalWrite(ledPioGreenMain, LOW);

              digitalWrite(ledPinRedSide, LOW);
              digitalWrite(ledPinYellowSide, HIGH);
              digitalWrite(ledPinGreenSide, LOW);

              delay((intervalWait) / 2);
              Serial.println((intervalWait) / 2);

              break;

            case 1 :    // Green for walking over sideroad.
              digitalWrite(ledPinRedMain, HIGH);
              digitalWrite(ledPinYellowMain, LOW);
              digitalWrite(ledPioGreenMain, LOW);

              digitalWrite(ledPinRedSide, LOW);
              digitalWrite(ledPinYellowSide, LOW);
              digitalWrite(ledPinGreenSide, HIGH);

              delay(intervalSide);

              i = 0;

              break;
          }
        }

        break;

      default:

        for (int j = 0; j <= 4; j++)
        {

          Serial.println("Error. Now resetting!");

          digitalWrite(ledPinRedMain, HIGH);
          digitalWrite(ledPinYellowMain, HIGH);
          digitalWrite(ledPioGreenMain, HIGH);

          digitalWrite(ledPinRedSide, HIGH);
          digitalWrite(ledPinYellowSide, HIGH);
          digitalWrite(ledPinGreenSide, HIGH);

          delay(500);

          digitalWrite(ledPinRedMain, LOW);
          digitalWrite(ledPinYellowMain, LOW);
          digitalWrite(ledPioGreenMain, LOW);

          digitalWrite(ledPinRedSide, LOW);
          digitalWrite(ledPinYellowSide, LOW);
          digitalWrite(ledPinGreenSide, LOW);

          delay(500);

        }

        i = 0;

        break;

    }
  }




}

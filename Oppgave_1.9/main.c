/*Oppgave 1.9
I denne oppgaven skal det lages et program som konverterer temperaturer fra Celsius til Fahrenheit. Temperaturene skal være heltall.

Prøv først med følgende beregning:

int C=38;
int F;  
F=( (9 / 5)*C + 32);   

Temperaturen 38 grader Celsius er valgt fordi dette skal bli ca 100 grader Fahrenheit.

Test resultatet programmet gir.

Resultatet viser at noe er galt. Løs problemet!

Vi ønsker å beholde variablene C og F som heltall.

Tips: casting
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c = 38;
	int f;
	float conv;

	//caster 9/5 til å være en float verdi slik at det behandles som et
	//desimaltall og ikke rundes	
	conv = (float)9/5;
	f = (conv*c + 32);

    printf("%d er ca. %d fahrenheit",c,f);
    return 0;
}

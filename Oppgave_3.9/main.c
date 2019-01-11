/*Oppgave 3.9
I denne oppgaven skal den matematiske funksjonen sin(x)sin(x)sin(x) brukes.Husk å inkludere <math.h> i starten av programmet.

Bruk funksjonen fra forrige deloppgave til å tegne en sinusform.

"Plottet" skal gå fra x=0x=0x=0 til π\piπ i trinn på π/30\pi/30π/30.

Hint: Lag en løkke som løper gjennom 30 vinkler fra 000 til π\piπ i trinn på π/30\pi/30π/30. Beregn sinus til vinkelen. Skaler opp resultatet med for eksempel en faktor 40 (for å få større amplitude på sinusen). Gjør resultatet om til heltall (int) ved hjelp av typekonverterting, og bruk funksjonen fra Oppgave 3-8 til å "plotte" resultatet.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void skriv_stjerner(int n){
	int i;

	for(i = 0;i <= n;i++)
		printf("*");		
	printf("\n");
	
}

int main()
{
	int j, output;
	float x;	

	for(j = 0;j <= 30;j++){
		if(j == 0)
			output = j;
		else{
			x = sin((M_PI/30)*j);
			output = (int)(x*40);
		}
		skriv_stjerner(output);
	}
	return 0;
}

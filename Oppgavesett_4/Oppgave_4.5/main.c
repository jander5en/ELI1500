/*Oppgave 4.5
I denne oppgaven brukes følgende tre array:

float minTemp[365];  
float maxTemp[365]; 
int nedbør[365];

Disse inneholder minimumstemperatur, maksimumstemperatur og antall millimeter nedbør for hvert døgn gjennom et år.

Trekk tilfeldige tall for å fylle arrayene med verdier.

Lag et program som

    skriver ut den høyeste maksimumstemperaturen dette året
    skriver ut antall tropenetter, og hvilke døgn disse nettene opptrer (døgnnummer).
    skriver ut antall døgn med snø. Dette avgjør du ved å telle antall døgn med maksimumstemperatur under null og nedbør større enn null. 
*/

//rotete og litt meningsløs.... Vurder å revidere hvis tid/lyst

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	//for å kunne avgjøre om et døgn har vært en tropenatt må det i hendhold til
	//definisjonen være 19 grader gjennom hele natten. For å kunne se på dette
	//må programmet derfor regne ut temperaturen for hele døgnet. Jeg tar
	//verdier for hver time hver dag.

int main()
{
	float minTemp[365];  
	float maxTemp[365]; 
	int nedboer[365];
	//setter en verdi for snittverdien per måned. Hentet fra yr.no. historikk
	// for målestasjonen på blinderen.(spritet opp)	
	float mnd[12] = {-13.3,-11.0,-0.2,4.5,15.8,20.2,19.4,15.2,10.8,3.3,-3.7,-7.1};
	float temp, temp_time, topp_temp;
	int i, j, k, x, y, z, trop, trop_antall,  currmnd, snoe_teller;
	int rando[365][24];
	//int endring, gradering;
	//genererer random verdier til senere bruk
	z = 0;
	for(x = 0;x < 365;x++)
		for(y = 0;y < 24;y++){
			srand(time(NULL)+z);			
			rando[x][y] = rand();
			z++;
		}
	
	currmnd = 0;
	//Setter verdier i listene for å kunne beregne max og min verdier
	for(k = 0;k < 365;k++){
		minTemp[k] = 50.0;
		maxTemp[k] = -50.0;
		nedboer[k] = 0;
	}		
	topp_temp = -50.0;
	
	//temp starter tellingen første dagen i året. Jeg setter derfor startverdien
	//til 0
	temp = 0.0;
	//teller dagene i året
	for(i = 0;i < 365;i++){
		//(re)setter kontrollen for tropenetter
		trop = 1;
		//Hver gang i er et multiplum av 30 teller en måned opp.
		if(i%30 == 0 && i != 0)
			currmnd++;
		//teller timene i døgnet
		for(j = 0;j < 24;j++){
			//setter opp variablene for evaluering av resultatene
			/*
			endring = rand()%4;
			gradering = rand()%5;
			//sjekker om temperaturen skal endres og med hvor mye 
			if(endring < 2 && temp <= 30.0)
				temp += (float)gradering;
			else if(endring >= 2 && temp >= -30.0)
				temp -= (float)gradering;
			*/
			temp = rando[i][j]%10;
			//Setter resultatet for temperaturen for den inneværende timen
			if(i%2 == 0)
				temp_time = temp + mnd[currmnd];
			else
				temp_time = mnd[currmnd] - temp;
			//Hvis temperaturen faller under 20 grader er det ikke tropenatt
			if(temp_time < 20)
				trop = 0;
			//sjekker om det er ny maks eller min temperatur for dagen:
			if(temp_time > maxTemp[i])
				maxTemp[i] = temp_time;
			if(temp_time < minTemp[i])
				minTemp[i] = temp_time;

			temp = 0;	
			temp_time = 0;

			if(temp < 1)
				nedboer[i] += rando[i][j]%2;
		}
		nedboer[i] = nedboer[i]/5;
		if(rando[i][0]%2 == 0)
			nedboer[i] = 0;
		if(maxTemp[i] <= 0 && nedboer[i] > 0) 
			snoe_teller++;
		if(trop == 1)
			trop_antall++;
		if(maxTemp[i] > topp_temp)
			topp_temp = maxTemp[i];
	}

    printf("\nAntall tropenetter: %d\n", trop_antall);
    printf("\nAntall dager med snø: %d\n", snoe_teller);
    printf("\nDen høyeste temperaturen: %3.1f\n", topp_temp);

    return 0;
}

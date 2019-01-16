/*Oppgave 4.4
I denne oppgaven brukes et array av type double.

Antall element i arrayet blir bestemt av konstanten MAKSANT. Bruk #define MAKSANT 10 i starten av programmet:

    #define MAKSANT 10

    ...
    double tall[MAKSANT];

Når programmet er testet ferdig skal konstanten MAKSANT økes.

Lag et program etter følgende spesifikasjon:

    Fyll arrayet tall[] med tilfeldige tall i området 0 til 100.
    Tips:For å få for eksempel to desimaler:
        Trekk tilfeldige tall fra 0 til 10 00010~00010 000
        Del det trukne tallet med 100.0100.0100.0. 
    beregn og skriv ut gjennomsnittet av tallene
    inn ut hvor mange tall som ligger innenfor gjennomsnittet ±\pm±10%. 

Testfase:

    Sett MAKSANT til et lite tall, for eksempel 10. Skriv ut alle tallene som genereres.
    Regn ut gjennomsnittsverdien, og skriv den ut. Ser svaret fornuftig ut?
    Regn ut grensene for gjennomsnittet ±\pm± 10%, og skriv dem ut. Vurder om svaret ser riktig ut.
    Finn ut hvilke tall som ligger innenfor gjennomsnittet ±\pm± 10%, og skriv dem ut, samtidig som du teller antall tall.
    Sjekk at programmet velger riktige tall og teller riktig. 

Avslutning:

Når punktene ovenfor er testet og funnet i orden, skal antall elementer i
arrayet økes til 25000 og programmet kjøres på nytt. Da bør du fjerne
utskriftssetningene som skriver ut elementene, og elementene som ligger innenfor
middelverdien ±\pm± 10%. Antallet innenfor grensene bør bli ca 2500 (10%).*/ 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAKSANT 25000

int main()
{
	double tall[MAKSANT];	
	double sum, gjennomsnitt, p10, m10;
	int i, j, antallpm;
	antallpm = 0;
	//Genererer tall og skriver det til arrayet. summerer opp verdiene
	for(i = 0;i < MAKSANT;i++){
		srand(time(NULL) + i);
		tall[i] = (rand()%10000)/(double)100; 
		sum = sum + tall[i];
	}
	//Regn ut og skriv ut gjennomsnittet
	gjennomsnitt = sum/MAKSANT;
    printf("\nGjennomsnittet av tallene er: %.2f/%d = %.2f", sum, MAKSANT, gjennomsnitt);
	
	//Finn verdiene som er pluss minus 10% av gjennomsnittet
	p10 = gjennomsnitt * 1.1;
	m10 = gjennomsnitt * 0.9;	
	
	printf("\n+10%% = %.2f og -10%% = %.2f\n\n", p10, m10);
	printf("tall som treffer i +/-10%%:\n");
	//finner antallet treff i +/-10% av gjennomsnittet, printer de ut 5 per
	//linje og teller antallet.
	for(j = 0;j < MAKSANT;j++)
		if(tall[j] <= p10 && tall[j] >= m10){
			antallpm++;
			printf("%8.2f ",tall[j]); 
			if(antallpm%7 == 0)
				printf("\n");
		}
	printf("\nTotalt %d tall som treffer +/-10%% av totalt %d\n", antallpm, MAKSANT);

    return 0;
}






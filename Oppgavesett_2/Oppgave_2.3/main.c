/*Oppgave 2.3
    Studentene i en annen klasse har 5 delprøver i løpet av året. Hver prøve gir en poengsum i området 0-100. Gjennomsnittet av poengsummene vil også være et tall mellom 0 og 100. Bokstavkarakterer gis utfra følgende tabell:

      0-39% gir F
     40-49% gir E 
     50-59% gir D
     60-79% gir C
     80-89% gir B
    90-100% gir A

Lag et program som leser inn poengsummen for hver enkelt prøve for en student.

Programmet skal skrive ut gjennomsnittet samt bokstavkarakter.
*/

#include <stdio.h>
#include <stdlib.h>
//En litt lat løsning på denne... Gjør om hvis det blir en anledning
int main()
{
	int a, sum, input, antall;
	sum = input = antall = 0;

	printf("legg inn karakterene til prøvene:");
	//legger resultatet for hver input til sum og skriver ut karakteren
	for(antall = 1;antall <= 5; ++antall){
		printf("\npoengsum for prøve nr. %d: ", antall);	
		scanf("%d", &input);
		if(input == 'a')
			break;
		sum = sum + input;
		if(input >= 0 && input <= 39)
			printf("\nPrøve nr. %d har karakter F", antall);
		if(input >= 40 && input <= 49)
			printf("\nPrøve nr. %d har karakter E", antall);
		if(input >= 50 && input <= 59)
			printf("\nPrøve nr. %d har karakter D", antall);
		if(input >= 60 && input <= 79)
			printf("\nPrøve nr. %d har karakter C", antall);
		if(input >= 80 && input <= 89)
			printf("\nPrøve nr. %d har karakter B", antall);
		if(input >= 90 && input <= 100)
			printf("\nPrøve nr. %d har karakter A", antall);
	}
	//Gjennomsnittet:
	a = (sum/5);	
    printf("\n\nGjennomsnittet er: %d \n", a);
    return 0;
}

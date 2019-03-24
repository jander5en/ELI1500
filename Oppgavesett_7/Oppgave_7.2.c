/*Oppgave 7.2
Lag et program som leser inn to tekststrenger med passende ledetekst.

Utskrift fra programmet: * Hvilken tekststreng er lengst * Hvilken tekststreng kommer først i alfabetet.

Bruk funksjonene strlen() og strcmp().*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char setning1[80];
	char setning2[80];
	
	int smaller, str1_lng, str2_lng;
	smaller = str1_lng = str2_lng = 0;

	printf("Les inn to teksstrenger og sammenlikne hvilken som er lengst:\n\n");
	printf("Setning 1: ");
	fgets(setning1, 80, stdin);
	printf("\nSetning 2: ");
	fgets(setning2, 80, stdin);
	
	smaller = strcmp(setning1, setning2);
	if(smaller < 0)
		printf("\nsetning 1 har lavest ASCII(tall) verdi!i");
	else if(smaller > 0)
		printf("\nsetning 2 har lavest ASCII(tall) verdi!i");
	else if(smaller == 0)
		printf("\nsetning 1 og to har samme ASCII(tall) verdi");
	
	str1_lng = strlen(setning1);
	str2_lng = strlen(setning2);
	if(str1_lng > str2_lng)
		printf("\nsetning 1 er større");
	else if(str1_lng < str2_lng)
		printf("\nsetning 2 er større");
	else if(str1_lng == str2_lng)
		printf("\nsetning 1 og 2 er like lange");
	
	return 0;

}

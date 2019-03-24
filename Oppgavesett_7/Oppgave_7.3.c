/*Oppgave 7.3
Passord. Vanlige krav til passord er

    Minimum 8 tegn (karakterer)
    Minimum et siffer (nummer)
    Minimum en stor bokstav
    Minimum en liten bokstav

Alle disse kravene må oppfylles. For øvrig er alle skrivbare tegn godtatt.

Lag et program som leser inn et passord og sjekker om passordet er gyldig.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	char passord[40];
	while(1){
		char c = 0;
		int j, antall, siffer, stor, liten;
		antall = siffer = stor = liten = j = 0;

		printf("skriv inn ditt passord:\n");
		fgets(passord, 40, stdin);
		
		//finn antallet	tegn
		antall = strlen(passord);
		//sjekker om det er tall i strengen
		for(int i = 0;i < 40;i++)
			if(isdigit(passord[i]))
				siffer = 1;
		//sjekker om det er stor bokstav
		for(int i = 0;i < 40;i++)
			if(isalpha(passord[i]))
				if(isupper(passord[i]))
					stor = 1;
		//ser etter liten bokstav
		for(int i = 0;i < 40;i++)
			if(isalpha(passord[i]))
				if(islower(passord[i]))
					liten = 1;

		if(antall >= 8 && siffer == 1 && stor == 1 && liten == 1){
			printf("Vaesjaago");
			break;
		}else{
			printf("Passordet må som minimum inneholde følgende: \n");
			printf("Minimum 8 tegn\n");
			printf("Minimum et siffer\n");
			printf("Minimum en stor bokstav\n");
			printf("Minimum en liten bokstav\n\n");
		}
	}	
	return 0;

}


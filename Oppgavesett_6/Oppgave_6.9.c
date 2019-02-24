/*Oppgave 6.9
Lag en funksjon

int finn0(int tall[], int lengde);

Funksjonen skal lete etter tallet 000 ved hjelp av en peker. Funksjonen skal
returnere indeksen til første ganget tallet null forekommer i arrayet tall[].
Dersom 000 ikke finnes i tall[] skal -1 returneres. */

#include <stdio.h>

int finn0(int tall[], int lengde){
//	overfører startadressen til arrayet til pekeren og gjør søket etter 0
//		verdien
	int *peker = tall;
	for(int i = 0;i < lengde;i++)
		if(peker[i] == 0)
			return i;
	return -1;
}

int main(){
	int tall[10] = {3,23,54,12,7,0,34,2,4,1};
	int lengde = sizeof(tall)/sizeof(int);

	printf("0 er i pos %d",1+finn0(tall,lengde));
}


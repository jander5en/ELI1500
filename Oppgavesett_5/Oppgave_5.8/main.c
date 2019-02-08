/*
I denne oppgaven er det gitt et array der alle tall forekommer to ganger, med ett unntak.

For eksempel:

1 3 2
3 2 5
1 4 4

Lag et program som finner tallet som bare forekommer en gang.

Det er et krav til programmet at utførelsestiden øker lineært med antall plasser i arrayet, det går derfor ikke å løpe gjennom arrayet og teste for hvert element om det finnes ett sted til.

Tips: bruk en av bitoperasjonene

&, | , ^, ~,<< eller >>
*/

#include <stdio.h>
#include <stdlib.h>
//skjønner fortsatt ikke hvordan logikken med å bruke xor gjør at vi finner
//tallet med kun en gjennomkjøring... 
/*
prøver en tabell:
res = 0
000^001 = 1
001^011 = 2
010^010 = 0
000^011 = 3
011^010 = 1
001^101 = 4
100^001 = 5
101^100 = 1
001^101 = 5

synes det ser litt tilfeldig ut at det blir 5 til slutt... er det noen andre
sammenhenger bakenfor?? er det et spesiellt tilfelle som avhenger av noe??

Når jeg kjører et annet sett med tall igjennom får jeg et helt annet resultat.
   */

int loese_kvadratisk(int tall[], int tall_lengde);
int loese_xor(int tall[], int tall_lengde);
int test_xor();

int main(){
//	den opprinnelige sekvensen:
//	int tall [9] = {1,3,2,3,2,5,1,4,4};
	int tall [11] = {1,3,2,3,2,5,1,4,4,2,1};
	int	lengde = sizeof(tall)/4;

	test_xor();
	printf("Finner det med en kvadratisk løsning: %d\n", loese_kvadratisk(tall,lengde));
	printf("\nLøsningen med xor funksjon: %d\n", loese_xor(tall,lengde));
}

int loese_xor(int tall[], int tall_lengde){
	int res = 0;
	for(int i = 0;i < tall_lengde;i++){
		printf("%d^%d = ", res, tall[i]);
		res=res^tall[i];
		printf("%d\n", res);
	}
	return res;
}

int loese_kvadratisk(int tall[], int tall_lengde){
	int resultat, finnes;
	for(int i = 0;i < tall_lengde;i++){
		finnes = 0;
		for(int j = 0;j < tall_lengde;j++)
			if(tall[i] == tall[j]){
				finnes++;	
			}
		if(finnes == 1)
			return tall[i];
	}
}

int test_xor(){
	int test[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i = 0;i < 10;i++)
		printf("%d^%d = %d\n", i, test[i], i^test[i]); 
}



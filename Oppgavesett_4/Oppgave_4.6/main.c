/*Oppgave 4.6
I denne oppgaven brukes resultatet fra Oppgave 3-6:

int terning(void)

Lag et program som simulerer kast med fem terninger, og registrerer summen.

    Bruk funksjonen int terning(void)
    Bruk et array f.eks. int antall[31] for å registrere summen.
    antall[i] skal telle opp hvor mange ganger summen blir i.
    Den minste summen som kan oppnås er 5, den største 30.
    Kjør koden i en mange nok ganger til at det kan plottes et histogram som beskriver sannsynlighetstetthetsfordelingen.

Plottet kan gjøres med funksjonen i Oppgave 3-8 eller ved et annet program som for eksempel Excel.

Dersom utskriften til skjerm er i et Excel-vennlig format, og programmet kjøres fra kommandolinjen, kan resultatet skrives til fil. Gitt at programmet heter terning og at resultatet skal lagres i en fil histogram.txt kan følgende kommandolinje benyttes:

/>  terning > histogram.txt
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MENGDE 20000

//skriver ut stjerner på den nåværende linjen
void skriv_stjerner(int n){
	int i, res;
	res = n/10;
	printf("\n");
	for(i = 0;i <= res;i++){
		printf("*");		
	}
}
//gir summen av 5 terningkast
int terning(void){
	int input;
   	int i, resultat;

	input = 0;
	for(i = 0;i < 5;i++)
		input = input + (1 + rand()%6); 
	resultat = input;
	return resultat;
}
int main(void)
{
	int i, j, k, kast;	
	int antall[31];	
	//setter verdiene til arrayet til 0 for å unngå uønsket oppførsel
	for(k = 0;k < 31;k++)	
	    antall[k] = 0;
	//utfører definerte mengde kast og registrerer treff i antall som
	//korresponderer med posisjonen	
	for(i = 0;i < MENGDE;i++){
		srand(time(NULL)+i);	
		kast = terning();
		++antall[kast];
	}
	//printer en liste over fordelingen
	for(j = 5;j < 31;j++)	
	    printf("\n%d: %d ", j, antall[j]);
	//printer et horisontalt histogram av resutltatene	
	for(j = 5;j < 31;j++)	
		skriv_stjerner(antall[j]);
	printf("\n");
    return 0;
}


/*Oppgave 2.4
Lag et program som

    leser inn to tall
    beregner største felles divisor

Test alle tall fra 2 og oppover (hvor langt?) og sjekk om tallet er en divisor i begge de innleste tallene. Skriv ut resultatet.

Tips: bruk modulusoperatoren for å teste om tallene er delelige.
*/

#include <stdio.h>
#include <stdlib.h>

/* 
//Versjon 1:

int main()
{
	int gcd, j, i, sum, x, y;
	sum = gcd = x = y = 0;
	i = j = 2;

    printf("legg inn det første tallet: \n");
	scanf("%d", &x);
    printf("legg inn det andre tallet: \n");
	scanf("%d", &y);
	//Lister opp divisorene
	printf("Divisorer i %d: ", x);
	for(j = 2;j <= x;++j)
		if(x%j == 0)
			printf("%d ", j);

	printf("Divisorer i %d: ", y);
	for(j = 2;j <= y;++j)
		if(y%j == 0)
			printf("%d ", j);
	//Finner minste felles multiplum
	while(sum == 0){
		if(i%x == 0 && i%y == 0){
			sum = i;
			break;
		}	
		++i;
	}
	printf("\n%d er Minste felles multiplum", sum);	
   	//Bruker minste felles multiplum til å regne ut største divisor 
	gcd = (x*y)/sum;

	printf("\n\nStørste felles divisor er: %d\n", gcd);	
	
	
	return 0;
}
*/

//Versjon 2:

int main(void){

	int x, y, gdc, teller, i;

    printf("legg inn det første tallet: \n");
	scanf("%d", &x);
    printf("legg inn det andre tallet: \n");
	scanf("%d", &y);
	//Setter det største tallet for å kunne kjøre for løkken rett antall ganger
	if(x<y)
		teller = y;
	else
		teller = x;
	printf("felles divisorer til %d og %d: ", x, y);
	//finner felles divisorer med modulus. Lagrer/oppdaterer gdc etter hvert
	//treff	
	for(i = 2;i <= teller;i++){
		if(x%i == 0 && x>=i)	
			if(y%i == 0 && y>=i){
				printf("%d ", i);
				gdc = i;
			}
	}	
	printf("\n\ngdc er: %d", gdc);
}



/*Oppgave 1.5
Motstander kan kobles i serie og parallell.

Serie:

RT=R1+R2R_{T} = R_1 +R_2 RT​=R1​+R2​

Parallell:

RT=R1⋅R2R1+R2R_T = \frac{R_1\cdot R_2}{R_1 + R_2}RT​=R1​+R2​

R1​⋅R2​​

Skriv et program som

    leser inn motstandsverdiene R1R_1R1​ og R2R_2R2​ etter en passende ledetekst og
    skriver ut verdien vi får hvis vi seriekobler motstandene,
    og hvis vi parallellkobler motstandene.

Eksempel:

Motstand 1 har verdien 2 Ohm
Motstand 2 har verdien 2 Ohm  

Seriekobling: 4 Ohm
Parallellkobling: 1 Ohm  
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int motstand1, motstand2, serie, parallell;
	motstand1 = motstand2 = serie = parallell = 0;

	//kjører en løkke som går til brukeren har gitt en verdi for begge
	//motstandene	
	while(motstand1 == 0 && motstand2 == 0){
		printf("motstand 1: ");
		scanf("%d", &motstand1);
		printf("\nmotstand 2: ");
		scanf("%d", &motstand2);
	}
	
	serie = motstand1 + motstand2;
	parallell = (motstand1*motstand2)/(motstand1+motstand2);

	printf("\nSeriekobling: %d\nParallell: %d\n", serie, parallell);
    return 0;
}

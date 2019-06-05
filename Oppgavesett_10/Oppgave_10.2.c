
/*Oppgave 10.2
 Lag et program som leser data fra filen produksjonsdata.dat fra Oppgave 10-1.

Beregn total produksjon for Dupp AS i løpet av et helt år (365 dager). Skriv ut resultatet.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define ANTALL 365 

int calcnum(int *);

int main(){
	
	//bruker calloc i steden for malloc slik at minnet blir intialisert til 0.
	//Dette eliminerer feil som kommer av søppel i minnet.
	int y, sum;
	y=sum=0;
	FILE *out_p = 0;
	out_p = fopen("produksjonsdata.dat","r");

	for(int i = 0;i < ANTALL;i++){
		fscanf(out_p,"%3d",&y);
		sum += y;
		y = 0;
	}
	printf("\nTotal produksjon for ett år: %d\n", sum);
}

/* Alternativ løsning med fgetc
	while((c = getc(out_p)) != EOF){
		printf("%c ", c);
		if(i >= ANTALL)
			y = realloc(y,ANTALL+i);

		if(isdigit(c)){
			if(!buff[0])
				buff[0] = (int)c;
			else
				if(!buff[1])
					buff[1] = (int)c;
				else
					if(!buff[2])
						buff[2] = (int)c;
			i++;
		}
		else{
			x = calcnum(buff);
			printf("%d",x);
		}
	}

	return 0;

}

int calcnum(int num[]){
	int sum = 0;
	if(num[0])
		sum+= num[0]*100;
	if(num[1])
		sum+= num[1]*10;
	if(num[2])
		sum+= num[2];
	for(int i = 0;i < sizeof(num)/sizeof(int);i++)
		num[i] = 0;

	return sum;
}

*/


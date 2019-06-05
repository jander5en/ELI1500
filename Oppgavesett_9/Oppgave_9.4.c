
/*Oppgave 9.4
Lag et array av struct deltager, slik som i Oppgave 9-1.
Legg inn verdier og skriv ut resultatliste (høyeste poengsum øverst).
Vi kan legge inn verdier i programmet med f.eks.
struct deltagere liste[]=
    {{"Hilde",50},
     {"Jon Sverre",60},
     {"Ola",40}};
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct deltager{
	char navn[30];
	int poeng;
};

int deltsort(struct deltager liste[]){
	int buffer = 0;
	for(int i = 0;i<5;i++)
		for(int j = 0;j<5;j++){
			if(liste[j].poeng < liste[j+1].poeng){
				buffer = liste[j].poeng;	
				liste[j].poeng = liste[j+1].poeng;
				liste[j+1].poeng = buffer;
			}
		}
	return 0;
}

int main(){
	struct deltager liste[] = {
		{"stein",20},
		{"berg",10},
		{"telt",50},
		{"helt",23},
		{"linn",40},
	};	

	deltsort(liste);

	printf("\n");
	for(int i = 0;i<5;i++){
		printf("\n%d.%7s\t%d",i+1,liste[i].navn,liste[i].poeng);	
	}
	return 0;

}

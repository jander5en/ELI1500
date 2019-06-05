
/*Oppgave 9.11
Utvid programmet i Oppgave 9-11 ved å lage en struktur for lånetakere:

    med lånetakers navn
    et array av pekere til bøker som lånetakeren har lånt. 

Lag en funksjon

void lån_ut(struct bok *b, struct lånetaker *l)

som låner ut en bok til en lånetaker:

    Funksjonen legger boka inn i lånerens array av bøker
    boka endrer status til utlånt. 

Lag også en funksjon for å returnere en bok.

Test funksjonene ved å opprette en låner, låne ut to bøker, og returnere den ene. Skriv ut bibliotekets beholdning (eller serien), og sjekk at utlånsstatus på de to bøkene er riktig.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char forfatter[30];
	char tittel[30];
	char utgitt[5];
	int laanestatus;
}Bok;
typedef struct {
	struct bok *list[10];
}Serie;
typedef struct { 
	char navn[30];
	Bok laant[10];
}Laanetaker;

void utlaan(Bok *b, Laanetaker *l){
	if(b->laanestatus){
		b->laanestatus = 0;
		for(int i = 0;i<10;i++){
			if(l->laant[i].forfatter == "")
				l->laant[i] = *b;
		}
	}
	else
		printf("\nBoken er allerede utlånt\n");
}

int main(){
	int input = 0;
	Bok boker[10]={
		{"Terry Prattchett", "Mort","1992",1},	
		{"Anne Holt", "somethingsomething blablabla","1976",1},	
		{"Terry Prattchett", "Going Postal","1999",1},	
		{"Terry Prattchett", "Thud!","2001",1},	
		{"Tolstoy", "Krig og fred og sånn","1880",1},	
		{"Erling Lae", "L","2000",1}	
	};
	Serie prattchett={
		{&boker[0],&boker[2],&boker[3]}
	};
	while(input != 5){
		printf("\nVelg handling:\n1: Lån ut bok\n2: 
		if(input == 1){
			printf("bøkene i registeret:\n");
			printf("Forfatter\t\t\ttittel\t\tutgivelse lånestatus\n");
			for(int i = 0;i < 6;i++)
				printf("%10s\t\t%s\t\t%5s\t%5d\n",boker[i].forfatter,boker[i].tittel,boker[i].utgitt,boker[i].laanestatus);
			printf("\n\nprattchett serien inneholder bøkene:\n");
			printf("Forfatter\t\t\ttittel\t\tutgivelse lånestatus\n");
			for(int i = 0;i < 3;i++)
				printf("%10s\t\t%s\t\t%5s\t%5d\n",(*(prattchett.list[i])).forfatter,(*(prattchett.list[i])).tittel,(*(prattchett.list[i])).utgitt,(*(prattchett.list[i])).laanestatus);
		}
	}
	return 0;
}

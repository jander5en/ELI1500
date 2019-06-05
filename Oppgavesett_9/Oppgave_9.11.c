
/*Oppgave 9.11
Vi skal lage et program som holder oversikt over bøker i et bibliotek.

Lag en struktur som representerer en bok, med

    forfatter
    tittel
    utgivelsesår
    lånsstatus (f.eks. 1 for utlånt, 0 for ikke utlånt) 

Lag et array av bøker og legg inn noen eksemplarer, for eksempel:
Louis Masterson	”Uten nåde”	1966
Louis Masterson	”Jungelens lov”	1967
Louis Masterson	”Dødsklokkene”	1970
Deitel & Deitel	"C : how to program"	2007

I tillegg:

    Opprett en struktur-serie som inneholder
        et navn på serien
        et array av pekere til bøker

Med eksemplet over kan du opprette serien ”Morgan Kane”, og la pekerne peke til de tre første bøkene i arrayet av bøker.

Skriv ut informasjon om serien og bøkene som inngår. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bok{
	char forfatter[30];
	char tittel[30];
	char utgitt[5];
	int laanestatus;
}Bok;
typedef struct serie{
	struct bok *list[10];
}Serie;
int main(){
	Bok boker[10]={
		{"Terry Prattchett", "Mort","1992",1},	
		{"Anne Holt", "somethingsomething blablabla","1976",0},	
		{"Terry Prattchett", "Going Postal","1999",1},	
		{"Terry Prattchett", "Thud!","2001",1},	
		{"Tolstoy", "Krig og fred og sånn","1880",1},	
		{"Erling Lae", "L","2000",1}	
	};

	Serie prattchett={
		{&boker[0],&boker[2],&boker[3]}
	};
	printf("prattchett serien inneholder bøkene:\n");
	printf("Forfatter\t\t\ttittel\t\tutgivelse lånestatus\n");
	for(int i = 0;i < 3;i++)
		printf("%10s\t\t%s\t\t%5s\t%5d\n",(*(prattchett.list[i])).forfatter,(*(prattchett.list[i])).tittel,(*(prattchett.list[i])).utgitt,(*(prattchett.list[i])).laanestatus);

	return 0;
}

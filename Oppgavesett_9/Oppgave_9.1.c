/*Oppgave 9.1
Vi skal registrere deltagere i en konkurranse.

Deklarer

struct deltager {  
    char navn[30];  
    int poeng; 
    };  

Les inn to deltagere fra tastaturet, og skriv ut hvem som vant (fikk flest poeng). 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	typedef struct deltager{
		char navn[30];
		int poeng;
	} Deltager;

int main(){
	Deltager delt1, delt2;	
	printf("Deltager 1\nnavn: ");
	printf("%s",fgets(delt1.navn,sizeof delt1.navn,stdin));
	printf("poeng: ");
	scanf("%d",&delt1.poeng);

	//ta ned leftover i bufferen fra scanf.

	char k = getchar();
	printf("Deltager 2\nnavn: ");
	fgets(delt2.navn,sizeof delt2.navn,stdin);
	printf("poeng: ");
	scanf("%d",&delt2.poeng);

	//fjerner linjeskift karakteren ved å sette det første tilfellet av
	//linjeskift til å være 0 som avslutter strengen.
	delt1.navn[strcspn(delt1.navn,"\n")] = 0;
	delt2.navn[strcspn(delt2.navn,"\n")] = 0;

	printf("\n\n");
	if(delt1.poeng<delt2.poeng)
		printf("%s har den største poeng summen med %d", delt2.navn, delt2.poeng);
	else if(delt1.poeng>delt2.poeng)
		printf("%s har den største poeng summen med %d", delt1.navn, delt1.poeng);
	else if(delt1.poeng==delt2.poeng)
		printf("%s og %s er like med %d poeng", delt1.navn, delt2.navn, delt2.poeng);
	printf("\n\n");
	return 0;

}

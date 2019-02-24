/*Oppgave 6.8
Vi skal lage et program med

    et array int x[5]
    en peker int *y

La y peke på første plass i arrayet x.

Les verdier inn i x med scanf() ved å bruke pekeren y. Det vil si, ikke skriv direkte inn i x[i].

Skriv ut de innleste verdiene, både med å bruke x[i] og pekernotasjonen med y. 
*/

#include <stdio.h>

int main(){
	int x[5];
	int *y = x;
	//les inn tall til adressen til x via pekeren y
	for(int i = 0;i < 5;i++)
		scanf("%d",y+i);
	//print ut tallene med pekeren som referanse eller array som referanse	
	printf("\nMed pekeren:\n");	
	for(int i = 0;i < 5;i++)
		printf("%d ",*(y+i));
	printf("\nMed arrayet:\n");	
	for(int i = 0;i < 5;i++)
		printf("%d ",x[i]);
}

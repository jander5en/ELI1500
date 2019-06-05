
/*Oppgave 9.7
Lag en struct brøk som inneholder en int teller og en int nevner.

Lag en funksjon struct brøk forkort(struct brøk tall) som returnerer en forkortet brøk med samme verdi.

Test funksjonen ved å sende en brøk som kan forkortes (f.eks. 12/18) til funksjonen, og skriv ut verdien som returneres (bør bli 2/3). 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct broek {
	int teller;
	int nevner;
};

struct broek forkorter(struct broek inn){
	int i = 0;
	for(int j = 0;j < (inn.teller+inn.nevner);j++){
		while(inn.teller > i && inn.nevner > i){
			i++;
			if(inn.teller%i == 0 && inn.nevner%i == 0){
				inn.teller = inn.teller/i;	
				inn.nevner = inn.nevner/i;
			}
		}
		i = 0;
	}
	return inn;
}

int main(){
	struct broek out, sum;
	printf("Legg inn en brøk som skal forkortes\nteller/nevner: ");
	scanf("%d/%d",&out.teller,&out.nevner);

	sum = forkorter(out);
	printf("\n%d/%d\n", sum.teller, sum.nevner);
	return 0;
}

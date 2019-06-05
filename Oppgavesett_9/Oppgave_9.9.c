
/*Oppgave 9.9
  Samme som Oppgave 9-7, bare at denne gangen skal du sende en peker til brøken som parameter til funksjonen:

void forkort (struct brøk *tall)

Funksjonen skal nå forkorte den brøken pekeren peker på. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct broek {
	int teller;
	int nevner;
};

struct broek forkorter(struct broek *inn){
	int i = 0;
	for(int j = 0;j < (inn->teller+inn->nevner);j++){
		while(inn->teller > i && inn->nevner > i){
			i++;
			if(inn->teller%i == 0 && inn->nevner%i == 0){
				inn->teller = inn->teller/i;	
				inn->nevner = inn->nevner/i;
			}
		}
		i = 0;
	}
}

int main(){
	struct broek out, *pp;
	pp = &out;
	printf("Legg inn en brøk som skal forkortes\nteller/nevner: ");
	scanf("%d/%d",&out.teller,&out.nevner);

	forkorter(pp);
	printf("\n%d/%d\n", out.teller, out.nevner);
	return 0;
}

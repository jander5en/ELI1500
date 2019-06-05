
/*Oppgave 9.8
Lag en funksjon som summerer to brøker (definert som i Oppgave 9-7).
Test funksjonen.
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
struct broek adder(struct broek en, struct broek to){
	struct broek sum;
	sum.teller = en.teller + to.teller;
	sum.nevner = en.nevner + to.nevner;
	return sum;
}

int main(){
	struct broek out1, out2, sum, add;
	printf("Legg inn to brøker som skal forkortes\nteller/nevner: ");
	scanf("%d/%d",&out1.teller,&out1.nevner);
	printf("teller/nevner: ");
	scanf("%d/%d",&out2.teller,&out2.nevner);

	add = adder(out1,out2); 
	printf("\nBrøkene lagt sammen: %d/%d", add.teller,add.nevner);
	sum = forkorter(add);
	printf("\n%d/%d\n", sum.teller, sum.nevner);
	return 0;
}

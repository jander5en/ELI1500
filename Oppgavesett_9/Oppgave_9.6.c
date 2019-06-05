
/*Oppgave 9.6
  Samme som Oppgave 9-5, men denne gangen skal vi sende en peker til struct student til funksjonen void skriv_sum(struct student *s).
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char navn[20];
    int poeng[6];
};

void skriv_sum(struct student *s){
	int sum = 0;
	for(int i = 0;i < (sizeof s->poeng)/(sizeof(s->poeng[0]));i++){
		sum+=(s->poeng[i]);
	}
	printf("\n%s har oppnådd %d poeng",s->navn, sum);
	printf("\n");
}

int main(){
	struct student liste[]={
		{"jonas",4,3,2,4,5,6},
		{"heilsa",2,6,1,3,4,3},
		{"ola",1,1,2,3,6,0},
		{"arild",5,5,3,4,1,6},
		{"trond",3,1,6,3,4,1}
	};
	struct student *send;
	struct student best = {"kalle",5,3,6,2,3,4};
	//gi send pekeren addressen til best structen
	send = &best;
	//skriv ut første poeng i best.
	printf("%d", send->poeng[0]);
	//send best til skriv sum
	skriv_sum(send);
	//sett send til starten på liste
	send = &liste[0];
	//skriv ut addressene til to liste structer. merk at disse består av 44 byte
	printf(" %d\n", &liste[0]);
	printf(" %d\n", &liste[1]);
	//skriv ut hele liste ved å sende send til skriv sum
	skriv_sum(send);
	//skriv ut ved å gi addressene i liste til send en og skriv de ut en og en.
	for(int i = 0;i < (sizeof liste)/(sizeof(liste[0]));i++){
		send = &liste[i];
		skriv_sum(send);
	}
	return 0;
}

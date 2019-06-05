
/*Oppgave 9.5
Deklarer
struct student{
    char navn[20];
    int poeng[6];
};
Arrayet poeng er poeng studenten har oppnådd på obligatoriske arbeider gjennom semesteret.
Lag en funksjon
void skriv_sum(struct student s)
som skriver ut hvor mange poeng en student har oppnådd til sammen.
Eksempel:
Petter har oppnådd 54 poeng til sammen.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char navn[20];
    int poeng[6];
};

void skriv_sum(struct student s){
	int sum = 0;
	for(int i = 0;i < (sizeof s.poeng)/(sizeof(s.poeng[0]));i++){
		sum+=(s.poeng[i]);
	}
	printf("\n%s har oppnådd %d poeng",s.navn, sum);
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
	for(int i = 0;i < (sizeof liste)/(sizeof(liste[0]));i++)
		skriv_sum(liste[i]);
	return 0;
}

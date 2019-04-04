/* Oppgave 7.8
Lag en funksjon som sorterer et array av tekststrenger alfabetisk.

Test funksjonen ved å skrive ut et array før og etter sortering.

Her kan du la tekststrengene ligge der de er i minnet og bare bytte om på
pekerne.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int stringsort(char *name[], int lengde);

int main(){
	int lengde = 6;
	char *name[] = {"fejk","fejkh","fhzzb","hekle","snu","sdledk"};
	printf("\nUsortert: ");
	for(int i = 0;i < lengde;i++){	
		printf("%s ", name[i]);
	}
	stringsort(name, lengde);	
	printf("\nsortert: ");
	for(int i = 0;i < lengde;i++){	
		printf("%s ", name[i]);
	}
}

int stringsort(char *name[], int lengde){
	char *buffer;
	for(int i = 0;i < lengde;i++)
		for(int j = 0;j < lengde;j++)
			if(strcmp(name[j],name[j+1])>0){
				buffer = name[j+1];
				name[j+1] = name[j];
				name[j] = buffer;
			}
}

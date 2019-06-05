
/* Oppgave 11.5
Lag et program som leser inn et ukjent antall tekststrenger som parametre til main() og skriver dem ut sortert etter lengde.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]){
	char *buff;
	char *rec[argc];
	int inputsize = 0;

	for(int i = 1;i < argc;i++){
		inputsize+=strlen(argv[i]);
		printf("%ld\n",strlen(argv[i]));
	}
	buff = malloc(20*sizeof(char));
	printf("%d ",inputsize);
/*
	for(int i = 0;i < argc;i++)
		rec[i] = realloc(inputsize*sizeof(char));
		if(i)
			strcpy(rec[i],argv[i]);
		else
			strcpy(rec,argv[i]);
	for(int i = 0;i<argc;i++)
		for(int j = 0;j<argc;j++)
			if(strcmp(argv[j],argv[j+1])<0 && j<argc-1){
				buff = realloc(buff,sizeof(char)*strlen(argv[j])+1);
				strcpy(buff,argv[j]);
				strcpy(argv[j],argv[j+1]);
				strcpy(argv[j],buff);
			}	
	for(int i = 1;i<argc;i++)
		printf("\n%s ",rec[i]);
*/			
}


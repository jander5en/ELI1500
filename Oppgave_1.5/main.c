#include <stdio.h>
#include <stdlib.h>

int main()
{
	int motstand1, motstand2, serie, parallell;
	motstand1 = motstand2 = serie = parallell = 0;
	
	while(motstand1 == 0 && motstand2 == 0){
		printf("motstand 1: ");
		scanf("%d", &motstand1);
		printf("\nmotstand 2: ");
		scanf("%d", &motstand2);
	}
	
	serie = motstand1 + motstand2;
	parallell = (motstand1*motstand2)/(motstand1+motstand2);

	printf("\nSeriekobling: %d\nParallell: %d\n", serie, parallell);
    return 0;
}

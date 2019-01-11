#include <stdio.h>
#include <stdlib.h>

/* 
//Versjon 1:

int main()
{
	int gcd, j, i, sum, x, y;
	sum = gcd = x = y = 0;
	i = j = 2;

    printf("legg inn det første tallet: \n");
	scanf("%d", &x);
    printf("legg inn det andre tallet: \n");
	scanf("%d", &y);

	printf("Divisorer i %d: ", x);
	for(j = 2;j <= x;++j)
		if(x%j == 0)
			printf("%d ", j);

	printf("Divisorer i %d: ", y);
	for(j = 2;j <= y;++j)
		if(y%j == 0)
			printf("%d ", j);

	while(sum == 0){
		if(i%x == 0 && i%y == 0){
			sum = i;
			break;
		}	
		++i;
	}
	printf("\n%d er Minste felles multiplum", sum);	
    
	gcd = (x*y)/sum;

	printf("\n\nStørste felles divisor er: %d\n", gcd);	
	
	
	return 0;
}
*/

//Versjon 2:

int main(void){

	int x, y, gdc, teller, i;

    printf("legg inn det første tallet: \n");
	scanf("%d", &x);
    printf("legg inn det andre tallet: \n");
	scanf("%d", &y);

	if(x<y)
		teller = y;
	else
		teller = x;
	printf("felles divisorer til %d og %d: ", x, y);	
	for(i = 2;i <= teller;i++){
		if(x%i == 0 && x>=i)	
			if(y%i == 0 && y>=i){
				printf("%d ", i);
				gdc = i;
			}
	}	
	printf("\n\ngdc er: %d", gdc);
}













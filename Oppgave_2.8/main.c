#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, a;
	char stj;
	stj = '*';

	for(i = 0;i <= 10;i++)
		if(i == 0){
			for(j = 0;j <= 10;j++)
				if(j == 0)
					printf("%4c",stj);
				else
					printf("%5d",j);
			printf("\n");
			for(a = 1;a <= 55;a++)
				printf("*");
			printf("\n");
		}
		else{
			for(j = 0;j <= 10;j++){
				if(j == 0)
					printf("%2d%2c", i, stj);
				else
					printf("%5d",(i*j));
			}
			printf("\n");
		}
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int temp[10], num[5];
	int c, i, count;
	
	count = 0;	
	for(i = 1;i <= 10;i++){
		for(i = 0; i <= 4;i++)
			num[i] = 0;
		while((c = getchar()) != 10){
			num[count] = c;
			count++;
		}
		temp[i] = num;
		count = 0;
	}
		
	for(i = 1;i <= 9;i++)
    	printf("%d\n", temp[i]);
    return 0;
}

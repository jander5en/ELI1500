#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k;

	printf("Rettvinklede trekanter med sider av heltall størrelse 100 og under:\n");
	for(i = 1;i <= 100;i++)
		for(j = 1;j <= 100;j++)
			for(k = 1;k <= 100;k++)
				if((j*j+i*i) == k*k)
					printf("%d, %d, %d\n", i, j, k);


    printf("\n");
    return 0;
}

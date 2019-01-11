#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x1, y1, x2, y2, rot;
	printf("\nx1: ");
	scanf("%f",&x1);

	printf("\ny1: ");
	scanf("%f",&y1);

	printf("\nx2: ");
	scanf("%f",&x2);

	printf("\ny2: ");
	scanf("%f",&y2);

	rot = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	printf("%.2f\n", rot);
	printf("kvadratroten av %1.3f %1.3f %1.3f %1.3f", x1, y1, x2, y2);

    return 0;
}

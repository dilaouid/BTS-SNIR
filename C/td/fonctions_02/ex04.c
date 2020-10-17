#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float Distance(float xa, float xb, float ya, float yb)
{
	float fact_1 = pow(xb - xa, 2);
	float fact_2 = pow(yb - ya, 2);

	return (sqrt(fact_1 + fact_2));
}

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	float xa, xb, ya, yb;
	
	printf("Coordonnée X du point A: ");
	scanf("%f", &xa);
	printf("Coordonnée Y du point A: ");
	scanf("%f", &ya);
	printf("Coordonnée X du point B: ");
	scanf("%f", &xb);
	printf("Coordonnée Y du point B: ");
	scanf("%f", &yb);
	printf("Distance AB: %g\n", Distance(xa, xb, ya, yb));
	return (0);
}

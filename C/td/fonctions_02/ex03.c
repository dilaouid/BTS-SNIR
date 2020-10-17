#include <stdio.h>

float PI()
{
	return (3.14159);
}

float Aire(float R)
{
	return (2 * PI() * R);
}

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	float R;
	
	printf("Rayon du cercle: ");
	scanf("%f", &R);
	if (R < 0)
		printf("Saisie invalide\n");
	else
		printf("Aire du cercle: %g\n", Aire(R));
	return (0);
	
}

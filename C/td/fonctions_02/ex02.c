#include <stdio.h>

float Remise(float prix, float remise)
{
	if (prix - remise < 0)
		return (0);
	return (prix - remise);
}

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	float prix;
	float remise;

	printf("Prix du produit: ");
	scanf("%f", &prix);
	printf("Remise: ");
	scanf("%f", &remise);
	printf("Prix après remise: %g€\n", Remise(prix, remise));
	return (0);
}

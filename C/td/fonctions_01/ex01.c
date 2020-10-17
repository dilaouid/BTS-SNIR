#include <stdio.h>
#include <stdlib.h>

double convertisseur(double euro)
{
	return (euro * 6.55957);
}

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	double euro;
	double francs;

	printf("Nombre d'euro à convertir en francs: ");
	scanf("%lf", &euro);
	if (euro > 0)
		printf("%g euros = %g francs\n", euro, convertisseur(euro));
	else
		printf("Saisie invalide\n");
	return (0);
}

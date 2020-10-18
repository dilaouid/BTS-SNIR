#include <stdio.h>

double aire(double largeur, double hauteur)
{
	return (largeur * hauteur);
}

int main(int argc, char *argv[])
{
	(void)argc,argv;
	double largeur,hauteur;

	printf("Largeur du rectangle: ");
	scanf("%lf", &largeur);
	printf("Hauteur du rectangle: ");
	scanf("%lf", &hauteur);
	printf("Aire du rectangle: %g\n", aire(largeur, hauteur));
	return (0);
}

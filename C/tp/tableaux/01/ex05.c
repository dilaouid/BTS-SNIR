#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	(void)argc, argv;
	int Mon_Tab[20] = {10, 50, 1000, -50, 30, 2, 250, 5600, -2000, 50, 600, 30, -50, 20, 15000, 2000, 89, 50, 150, 60};
	int count = 0, Valeur_Maximale = 0, Valeur_Minimale = 0;

	for (int i = 0; i < 20; i++)
	{
		if (Mon_Tab[i] > Valeur_Maximale)
			Valeur_Maximale = Mon_Tab[i];
		if (Mon_Tab[i] < Valeur_Minimale)
			Valeur_Minimale = Mon_Tab[i];
	}
	printf("La valeur maximale est %d ; La valeur minimale est %d\n", Valeur_Maximale, Valeur_Minimale);
	return (0);
}

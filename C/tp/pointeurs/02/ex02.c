#include <stdio.h>
#include <unistd.h>

void Inverse_Tableau(int *tab, int Nb_elts)
{
	int j;
	
	for (int i = 0; i < Nb_elts / 2; i++)
	{
		j = tab[i];
		tab[i] = tab[Nb_elts- i - 1];
		tab[Nb_elts - i - 1] = j;
	}
	for (int z = 0; z < Nb_elts; z++)
		printf("%d ", tab[z]);
	putchar('\n');
}

int main()
{
	int tab[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

	Inverse_Tableau(tab, 20);
	return (0);
}

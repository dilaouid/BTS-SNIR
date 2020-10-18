#include <stdio.h>
#include <unistd.h>

void Rempli_Tableau(int *tab, int Nb_elts)
{
	for (int i = 0; i < Nb_elts; i++) {
		tab[i] = i + 1;
		printf("%d ", tab[i]);
	}
	putchar('\n');
}

int main()
{
	int tab[20];
	Rempli_Tableau(tab, 20);
	return (0);	
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*Inverse_Tableau(int *tab, int Nb_elts)
{
	int *tabdup = (int *)malloc(sizeof(int) * Nb_elts + 1);
	int j = 0;

	for (int i = 0; i < Nb_elts; i++)
		tabdup[i] = tab[Nb_elts - i - 1];
	return (tabdup);
}

void	Fusionne_Tableau_03(int *tab1, int Nb_elts, int *tab2, int *tab3)
{
	int j = 0;
	tab2 = Inverse_Tableau(tab2, 10); // Mettre tab3 a la place de tab2

	for (int i = 0; i < Nb_elts - 1; i++)
	{
		tab3[i++] = tab1[j];
		tab3[i] = tab2[j++];
	}
	j = 0;
	while (j < Nb_elts)
		printf("%d ", tab3[j++]);
	putchar('\n');
}

int 	main()
{
	int tableau1[10] = {1,2,3,4,5,6,7,8,9,10};
	int tableau2[10] = {11,12,13,14,15,16,17,18,19,20};
	int tableau3[20] = {0};

	Fusionne_Tableau_03(tableau1, 20, tableau2, tableau3);
	return (0);
}

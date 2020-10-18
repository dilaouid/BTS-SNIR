#include <stdio.h>
#include <unistd.h>

void 	Fusionne_Tableau(int *tab1, int Nb_elts, int *tab2, int *tab3)
{
	int i = 0, j = 0;
	
	while (tab1[i])
		tab3[j++] = tab1[i++];
	i = 0;
	while (tab2[i])
		tab3[j++] = tab2[i++];
	i = 0;
	while (i < Nb_elts)
		printf("%d ", tab3[i++]);
	putchar('\n');
}

int 	main()
{
	int tableau1[10] = {1,2,3,4,5,6,7,8,9,10};
	int tableau2[10] = {11,12,13,14,15,16,17,18,19,20};
	int tableau3[20] = {0};

	Fusionne_Tableau(tableau1, 20, tableau2, tableau3);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int higherValue(int **tab)
{
	int i = 0, j = 0, max = 0, spaces = 3;
	while (tab[i])
	{
		while (tab[i][j])
		{
			if (tab[i][j] > max)
				max = tab[i][j];
			j++;
		}
		i++;
	}
	while (max > 0)
	{
		max /= 10;
		spaces++;
	}
	return (spaces);
}

void drawTable(int n, int m, int **tab)
{
	int i = 0, j;
	int spaceNb = higherValue(tab);

	putchar('\n');
	while (i < n)
	{
		j = 0;
		while (j < m)
			printf("%*.d", spaceNb, tab[i][j++]);
		putchar('\n');
		i++;
	}
}

int main(int argc, char *argv[])
{
	(void)argc, argv;
	int **tab;
	int val, n, m;

	printf("Nombre de colonnes: ");
	scanf("%d", &n);
	printf("Longueur du tableau: ");
	scanf("%d", &m);
	printf("\n\n");

	tab = (int **)malloc(sizeof(int*) * n + 1);
	for (int i = 0; i < n; i++)
	{
		tab[i] = (int *)malloc(sizeof(int) * m + 1);
		for (int j = 0; j < m; j++)
		{
			printf("Entrer l'élément [%d][%d]: ", i, j);
			scanf("%d", &val);
			tab[i][j] = val;
		}
	}
	drawTable(n, m, tab);
	
	putchar('\n');
	return (0);
}

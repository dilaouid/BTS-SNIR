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

void drawGrid(int **tab, int n, int m)
{
	int i = 0, j, spaceNb = higherValue(tab), sommeL = 0;
	int *sommeC;

	sommeC = (int *)malloc(sizeof(int) * n + 1);
	while (i < n)
	{
		j = 0;
		while (j < m)
		{
			sommeC[j] += tab[i][j];
			sommeL += tab[i][j];
			printf("%*.d", spaceNb, tab[i][j++]);
		}
		printf("|%*.d", spaceNb, sommeL);
		sommeL = 0;
		putchar('\n');
		i++;
	}
	printf("------------------------\n");
	for(int k = 0; k < m; k++) printf("%*.d", spaceNb, sommeC[k]);
}

void drawTable(int n, int m, int **tab)
{
	putchar('\n');
	drawGrid(tab, n, m);
	putchar('\n');
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
	printf("\n");

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
	printf("Tableau : ");
	drawTable(n, m, tab);
	return (0);
}

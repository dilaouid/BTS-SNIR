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

void getMinMax(int **tab)
{
	int i = 0, j, min = 0, max = 0, *k, *l;
	l = (int *)malloc(sizeof(int) * 2);
	k = (int *)malloc(sizeof(int) * 2);
	
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] > max)
			{
				k[0] = i;
				l[0] = j;
				max = tab[i][j];
			}
			if (tab[i][j] < min)
			{
				k[1] = i;
				l[1] = j;
				min = tab[i][j];
			}
			j++;
		}
		i++;
	}
	printf("La valeur mini est %d et se trouve à [%d][%d]\n", min, k[1], l[1]);
	printf("La valeur maxi est %d et se trouve à [%d][%d]\n", max, k[0], l[0]);
}

void drawGrid(int **tab, int n, int m)
{
	int i = 0, j, spaceNb = higherValue(tab);

	while (i < n)
	{
		j = 0;
		while (j < m)
			printf("%*.d", spaceNb, tab[i][j++]);
		putchar('\n');
		i++;
	}
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
	getMinMax(tab);
	return (0);
}

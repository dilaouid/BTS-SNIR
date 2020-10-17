#include <unistd.h>
#include <stdio.h>

void drawspace(int nb)
{
	while (nb-- >= 0)
		putchar(' ');
}

int main(int argc, char *argv[])
{
	(void)argc, argv;
	int i = 1, j, k = 0, count;

	printf("Entrer le nombre de lignes: ");
	scanf("%d", &count);
	while (count--)
	{	
		drawspace(count - 1);
		j = i;
		while (i-- + k > 0)
			putchar('*');
		drawspace(count - 1);
		putchar('\n');
		i = j + 1;
		k++;
	}
	return (0);
}

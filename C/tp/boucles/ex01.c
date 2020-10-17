#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)argc, argv;
	int i = 1, j, count;

	printf("Entrer le nombre de lignes: ");
	scanf("%d", &count);
	while (count--)
	{	
		j = i;
		while (i--)
			putchar('*');
		putchar('\n');
		i = j + 1;
	}
	return (0);
}

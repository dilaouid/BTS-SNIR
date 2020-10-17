#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	(void)argc, argv;
	int Mon_Tab[20] = {10, 50, 1000, -50, 30, 2, 250, 5600, -2000, 50, 600, 30, -50, 20, 15000, 2000, 89, 50, 150, 60};
	int value, i;

	printf("Index a modifier: ");
	scanf("%d", &i);
	if (!Mon_Tab[i])
	{
		printf("\033[1;31mIndex incorrect\n");
		return (0);
	}
	printf("Valeur à insérer: ");
	scanf("%d", &value);
	Mon_Tab[i] = value;
	for (int count = 0; count < 20; count++)
		printf("Mon_Tab[%d]=%d;", count, Mon_Tab[count]);
	putchar('\n');
	return (0);
}

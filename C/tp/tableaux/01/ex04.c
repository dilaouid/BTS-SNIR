#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	(void)argc, argv;
	int Mon_Tab[20] = {10, 50, 1000, -50, 30, 2, 250, 5600, -2000, 50, 600, 30, -50, 20, 15000, 2000, 89, 50, 150, 60};
	int count = 0, n;

	printf("Saisir la valeur de N: ");
	scanf("%d", &n);

	for (int i = 0; i < 20; i++)
	{
		if (Mon_Tab[i] == n) count++;
	}

	if (count > 0)
		printf("%d se trouve %d fois dans le tableau\n", n, count);
	else
		printf("%d ne se trouve pas dans le tableau\n", n);
	return (0);
}

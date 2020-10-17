#include <stdio.h>

int estPair(int n)
{
	return (n % 2 == 0);
}

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	int n;

	printf("Saisir le nombre à vérifier: ");
	scanf("%d", &n);
	if (estPair(n))
		printf("%d est pair\n", n);
	else
		printf("%d est impair\n", n);
	return (0);
}

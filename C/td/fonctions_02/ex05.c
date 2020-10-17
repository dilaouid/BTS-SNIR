#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

_Bool f(int *t, int n)
{
	int i = 0;
	while (i < n && t[i])
	{
		if (t[i] >= 0 && t[i] <= 10)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int n;
	int *t = malloc((int)argc + 1);
	if (argc == 1)
	{
		printf("\033[1;31mMerci de saisir au moins un argument pour remplir le tableau !\n");
		return (0);
	}
	printf("La taille à vérifier: ");
	scanf("%d", &n);
	for (int i = 1; i < argc; i++) {
		t[i - 1] = atoi(argv[i]);
	}
	printf("%d\n", f(t, n));
	return (0);
}

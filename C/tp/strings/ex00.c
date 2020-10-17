#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int newstrlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// On est en 2020, utiliser gets() c'est devenu deprecated monsieur le professeur :)

int main(int argc, char *argv[])
{
	(void)argc, argv;
	char buffer[255];
	char *trim;

	printf("Saisir une phrase: ");
	fgets(buffer, 255, stdin);
	printf("Il y a %d caractères dans la chaîne saisie.\n", newstrlen(buffer)-1);
}

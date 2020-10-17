#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int countocc(char *str, char c)
{
	int count = 0;
	while (*str++)
		if (*str == c) count++;
	return (count);
}

int main(int argc, char *argv[])
{
	(void)argc, argv;
	char buffer[255], s[255], c[1];
	
	printf("Saissisez la chaîne S: ");
	fgets(buffer, 255, stdin);
	strcpy(s, buffer);

	printf("Saissisez le caractère C à rechercher: ");
	fgets(c, 2, stdin);

	printf("Il y a %d fois le caractère '%c' dans la chaîne\n", countocc(s, c[0]), c[0]);
	return (0);
}

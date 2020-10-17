#include <stdio.h>
#include <string.h>

void 	sendError()
{
	printf("\033[1;31mVotre chaîne contient une erreur... Erreur retour: ");
}

int 	newAtoi(char *str)
{
	int i = 0, nb = 0, neg = 1;

	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
	{
		sendError();
		return -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb += str[i++] - 48;
		if (str[i] != '\0')
			nb *= 10;
	}
	if (i < strlen(str))
	{
		sendError();
		return -2;
	}
	return (nb * neg);
}

int main(int argc, char **argv)
{
	(void)argc, argv;
	char str[50];

	printf("Saissisez une chaîne à convertir: ");
	scanf("%s", str);
	printf("%d\n", newAtoi(str));
	return (0);
}

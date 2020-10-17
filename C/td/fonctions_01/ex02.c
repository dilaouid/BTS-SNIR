#include <stdio.h>

void repeatMsg(int i)
{
	while (i--)
	{
		printf("Message\n");
	}
}

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	repeatMsg(10);
	return (0);
}

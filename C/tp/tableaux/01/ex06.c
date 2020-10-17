#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	(void)argc, argv;
	int Mon_Tab[20] = {10, 50, 1000, -50, 30, 2, 250, 5600, -2000, 50, 600, 30, -50, 20, 15000, 2000, 89, 50, 150, 60};
	int count = 0, i = 0, len = 20, tmp;

	while (i < len--)
	{
		tmp = Mon_Tab[i];
		Mon_Tab[i++] = Mon_Tab[len];
		Mon_Tab[len] = tmp;
	}
	for (int count = 0; count < 20; count++)
		printf("Mon_Tab[%d]=%d;", count, Mon_Tab[count]);
	putchar('\n');
	return (0);
}

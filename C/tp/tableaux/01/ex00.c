#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	(void)argc, argv;
	int Mon_Tab[20] = {10, 50, 1000, -50, 30, 2, 250, 5600, -2000, 50, 600, 30, -50, 20, 15000, 2000, 89, 50, 150, 60};
	
	for (int i = 0; i < 20; i++)
		printf("Mon_Tab[%d]=%d;", i, Mon_Tab[i]);
	putchar('\n');
	return (0);

}

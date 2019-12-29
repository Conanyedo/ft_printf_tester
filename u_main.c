#include "stdio.h"

int main()
{
	int i,j,y,u = 0,x;

    i = -5;
	printf("%d\n", printf("%09.*d\n", -1, 22));
	while (i < 5)
    {
        j = -5;
        while (j < 5)
        {
            printf("\n\n");
			printf("\033[0;33m[]\033[0m");
            printf("[%d]--[%d]\n", i, j);
            x = printf("|%*.*u|", i, j, -5);
            printf("\nreturn : %d\n", x);
            j++;
        }
        i++;
    }

	i = -5;
	while (i < 5)
	{
		j = -5;
		while (j < 5)
		{
			printf("\n\n");
			printf("\033[0;33m[0]\033[0m");
			printf("[%d]--[%d]\n", i, j);
			x = printf("|%0*.*u|", i, j, -5);
			printf("\nreturn : %d\n", x);
			j++;
		}
		i++;
	}

	i = -5;
	while (i < 5)
	{
		j = -5;
		while (j < 5)
		{
			printf("\n\n");
			printf("\033[0;33m[-]\033[0m");
			printf("[%d]--[%d]\n", i, j);
			x = printf("|%-*.*u|", i, j, -5);
			printf("\nreturn : %d\n", x);
			j++;
		}
		i++;
	}

	i = -5;
	while (i < 5)
	{
		j = -5;
		while (j < 5)
		{
			printf("\n\n");
			printf("\033[0;33m[-0]\033[0m");
			printf("[%d]--[%d]\n", i, j);
			x = printf("|%-0*.*u|", i, j, -5);
			printf("\nreturn : %d\n", x);
			j++;
		}
		i++;
	}

	return (0);
}

#include<stdio.h>

int myMax(int, int);

int main()
{
	unsigned int x[2];
	unsigned int* n = x;
	for (int i = 0; i < 2; i++)
	{
		if (scanf_s("%d", &x[i]) != 1)
		{
			printf("ERROR");
			return 1;
		}
		else if (x[i] < 1 || x[i] > 2000000000)
		{
			printf("ERROR");
			return 1;
		}
	}
	for (int i = myMax(*n, *(n + 1)); i > 0; i--)
	{
		if (*n % i == 0 && *(n + 1) % i == 0)
		{
			printf("%d", i);
			i = 0;
		}
	}
	return 0;
}

int myMax(int a, int b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
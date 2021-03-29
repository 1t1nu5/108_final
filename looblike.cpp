#include <stdio.h>
int main()
{
	int max;
	scanf("%d", &max);
	int number[max];
	int amount[max];
	for (int i = 0; i < max; i++)
	{
		number[i] = -1;
		amount[i] = 0;
	}
	int get;
	for (int i = 0; i < max; i++)
	{
		scanf("%d", &get);
	}
	return 0;
}

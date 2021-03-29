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
		for (int j = 0; number[j] != -1; j++)
		{
			if (get == number[j])
			{
				amount[j]++;
				break;
			}
			else if (number[j+1] == -1)
			{
				number[j+1] = get;
				amount[j+1]++;
			}
		}
	}
	int max = 0;
	for (int i = 0; number[i] != 0; i++)
	{
		if (amount[i] > max)
		{
			max = amount[i];
		}
	}
	return 0;
}

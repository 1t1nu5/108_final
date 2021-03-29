#include <stdio.h>
int main()
{
	int max;
	scanf("%d", &max);
	int number[max+1];
	int amount[max+1];
	for (int i = 0; i < max+1; i++)
	{
		number[i] = -1;
		amount[i] = 0;
	}
	int get;
	for (int i = 0; i < max+1; i++)
	{
		scanf("%d", &get);
		for (int j = 0; number[j] != -1; j++)
		{
			if (get == number[j])
			{
				amount[j]++;
				break;
			}
			else if (number[j] == -1)
			{
				number[j+1] = get;
				amount[j+1]++;
			}
		}
	}
	int most = 0;
	for (int i = 0; number[i] != 0; i++)
	{
		if (amount[i] > most)
		{
			most = amount[i];
		}
	}
	for (int i = 0; number[i] != 0; i++)
	{
		if (amount[i] == most)
		{
			printf("%d ", number[i]);
		}
	}
	return 0;
}

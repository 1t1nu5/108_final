#include <stdio.h>
int main()
{
	int max, amount[10000] = {}, get;
	scanf("%d", &max);
	for (int i = 0; i < max; i++)
	{
		scanf("%d", get);
		amount[get]++;
	}
	int most = 0;
	for (int i = 0; i < 10000; i++)
	{
		if (amount[i] > most)
		{
			most = amount[i];
		}
	}
	for (int i = 0; i < 10000; i++)
	{
		if (amount[i] == most)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

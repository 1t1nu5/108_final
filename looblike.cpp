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
	return 0;
}

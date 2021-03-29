#include <stdio.h>
int main()
{
	int n0;
	scanf("%d", &n0);
	int m[n0][n0];
	for (int i = 0; i < n0; i++)
	{
		for (int j = 0; j < n0; j++)
		{
			scanf("%d", &m[i][j]);
		}
	}
	int sum = 0, check = 0;
	for (int i = 0; i < n0; i++)
	{
		sum += m[i][i];
	}
	for (int i = 0; i < n0; i++)
	{
		check += m[i][n0-i];
	}
	if (sum != check)
	{
		goto no_0;
	}
	for (int i = 0; i < n0; i++)
	{
		check = 0;
		for (int j = 0; j < n0; j++)
		{
			check += m[i][j];
		}
		if (sum != check)
		{
			goto no_0;
		}
	}
	for (int i = 0; i < n0; i++)
	{
		check = 0;
		for (int j = 0; j < n0; j++)
		{
			check += m[j][i];
		}
		if (sum != check)
		{
			goto no_0;
		}
	}
	printf("yes");
	goto next_0;
	no_0:
		printf("no");
	next_0:
		printf("");
	
	return 0;
}

#include <stdio.h>
int main()
{
	int n0, n1, n2;
	scanf("%d %d %d", &n0, &n1, &n2);
	int m0[n0][n0];
	int m1[n1][n1];
	int m2[n2][n2];
	for (int i = 0; i < n0; i++)
	{
		for (int j = 0; j < n0; j++)
		{
			scanf("%d", &m0[i][j]);
		}
	}
	for (int i = 0; i < n0; i++)
	{
		for (int j = 0; j < n0; j++)
		{
			scanf("%d", &m1[i][j]);
		}
	}
	for (int i = 0; i < n0; i++)
	{
		for (int j = 0; j < n0; j++)
		{
			scanf("%d", &m2[i][j]);
		}
	}
	
	int sum = 0, check = 0;
	for (int i = 0; i < n0; i++)
	{
		sum += m0[i][i];
	}
	for (int i = 0; i < n0; i++)
	{
		check += m0[i][n0-i];
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
			check += m0[i][j];
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
			check += m0[j][i];
		}
		if (sum != check)
		{
			goto no_0;
		}
	}
	printf("yes\n");
	goto next_0;
	no_0:
		printf("no\n");
	next_0:
	// 000000000000000000000000000000000000000000000000000000000000000
	sum = 0, check = 0;
	for (int i = 0; i < n0; i++)
	{
		sum += m1[i][i];
	}
	for (int i = 0; i < n0; i++)
	{
		check += m1[i][n0-i];
	}
	if (sum != check)
	{
		goto no_1;
	}
	for (int i = 0; i < n1; i++)
	{
		check = 0;
		for (int j = 0; j < n1; j++)
		{
			check += m1[i][j];
		}
		if (sum != check)
		{
			goto no_1;
		}
	}
	for (int i = 0; i < n1; i++)
	{
		check = 0;
		for (int j = 0; j < n1; j++)
		{
			check += m1[j][i];
		}
		if (sum != check)
		{
			goto no_1;
		}
	}
	printf("yes\n");
	goto next_1;
	no_1:
		printf("no\n");
	next_1:
	// 111111111111111111111111111111111111111111111111111111111111111
	sum = 0, check = 0;
	for (int i = 0; i < n2; i++)
	{
		sum += m2[i][i];
	}
	for (int i = 0; i < n2; i++)
	{
		check += m2[i][n2-i];
	}
	if (sum != check)
	{
		goto no_2;
	}
	for (int i = 0; i < n2; i++)
	{
		check = 0;
		for (int j = 0; j < n2; j++)
		{
			check += m2[i][j];
		}
		if (sum != check)
		{
			goto no_2;
		}
	}
	for (int i = 0; i < n2; i++)
	{
		check = 0;
		for (int j = 0; j < n2; j++)
		{
			check += m2[j][i];
		}
		if (sum != check)
		{
			goto no_2;
		}
	}
	printf("yes");
	goto next_2;
	no_2:
		printf("no");
	next_2:
	return 0;
}

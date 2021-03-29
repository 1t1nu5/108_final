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
	int sum = 0;
	for (int i = 0; i < n0; i++)
	{
		sum += m[i][i];
	}
	return 0;
}

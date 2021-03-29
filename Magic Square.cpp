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
			scanf("%d", m0[i][j]);
		}
	}
	
}

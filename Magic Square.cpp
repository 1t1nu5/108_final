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
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			scanf("%d", m1[i][j]);
		}
	}
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			scanf("%d", m2[i][j]);
		}
	}
	
		int test = m0[0][0]+m[1][1]+m[2][2];
		if (test != m0[0][2]+m[1][1]+m[2][0])
		{
			printf("no\n");
			goto romp1;
		}
		if (test != m0[0][0]+m[0][1]+m[0][2])
		{
			printf("no\n");
			goto romp1;
		}
		if (test != m0[1][0]+m[1][1]+m[1][2])
		{
			printf("no\n");
			goto romp1;
		}
		if (test != m0[2][0]+m[2][1]+m[2][2])
		{
			printf("no\n");
			goto romp1;
		}
		if (test != m0[0][0]+m[1][0]+m[2][0])
		{
			printf("no\n");
			goto romp1;
		}
		if (test != m0[0][1]+m[1][1]+m[2][1])
		{
			printf("no\n");
			goto romp1;
		}
		if (test != m0[0][3]+m[1][3]+m[2][3])
		{
			printf("no\n");
		}
		else
		{
			printf("yes\n");
		}
	romp1:
		
}

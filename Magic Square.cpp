#include <stdio.h>
#include <string.h>
int main()
{
	char msg[10];
	scanf("%s", msg);
	for (int i = 0; i < 10; i++)
	{
		printf("%d %d\n", i, msg[i]);
	}
	return 0;
}

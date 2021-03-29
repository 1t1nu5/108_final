#include <stdio.h>
#include <string.h>
int main()
{
	int number, digit, length = 1;
	char receive[8] = {};
	scanf("%s", receive);
	for (int i = 5; i > 1; i--)
	{
		if (receive[i] == NULL)
		{
			length = i;
		}
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
	int number, digit, length = 3;
	char receive[8] = {};
	scanf("%s", receive);
	for (int i = 6; i > 3; i--)
	{
		if (receive[i] == NULL)
		{
			length = i+1;
		}
	}
	return 0;
}

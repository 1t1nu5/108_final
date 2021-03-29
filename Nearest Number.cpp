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
	switch (length)
	{
		case 1:
			number = receive[0] - '0';
			digit = receive[3] - '0';
	}
	return 0;
}

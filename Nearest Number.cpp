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
			digit = receive[2] - '0';
			break;
		case 2:
			number = (receive[0] - '0')*10;
			number += receive[1];
			digit = receive[3] - '0';
			break;
		case 3:
			number = (receive[0] - '0')*100;
			number = (receive[1] - '0')*10;
			number += receive[2];
			digit = receive[4] - '0';
			break;
	}
	return 0;
}

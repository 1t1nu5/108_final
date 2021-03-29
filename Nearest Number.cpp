#include <stdio.h>
#include <string.h>
int main()
{
	int number, digit, length = 1;
	char receive[8];
	scanf("%s", receive);
	for (int i = 4; i > 0; i--)
	{
		if (receive[i] == NULL)
		{
			length = i;
		}
	}
	printf("%d\n", length);
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
			number += (receive[1] - '0')*10;
			number += receive[2];
			digit = receive[4] - '0';
			break;
		case 4:
			number = (receive[0] - '0')*1000;
			number += (receive[1] - '0')*100;
			number += (receive[2] - '0')*10;
			number += receive[3];
			digit = receive[5] - '0';
			break;
		case 5:
			number = (receive[0] - '0')*10000;
			number += (receive[1] - '0')*1000;
			number += (receive[2] - '0')*100;
			number += (receive[3] - '0')*10;
			number += receive[4];
			digit = receive[6] - '0';
			break;
	}
	printf("%d %d", number, digit);
	return 0;
}

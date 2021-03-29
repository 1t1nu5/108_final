#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int number, digit, length = 5;
	char receive[8];
	scanf("%s", receive);
	for (int i = 1; i < 6; i--)
	{
		if (receive[i] == 32)
		{
			length = i+1;
		}
	}
	printf("check:\n");
	for (int i = 0; i < 8; i++)
	{
		printf("%d, %d\n", i, receive[i]);
	}
	system("pause");
	switch (length)
	{
		case 1:
			number = receive[0] - '0';
			digit = receive[2] - '0';
			break;
		case 2:
			number = (receive[0] - '0')*10;
			number += receive[1] - '0';
			digit = receive[3] - '0';
			break;
		case 3:
			number = (receive[0] - '0')*100;
			number += (receive[1] - '0')*10;
			number += receive[2] - '0';
			digit = receive[4] - '0';
			break;
		case 4:
			number = (receive[0] - '0')*1000;
			number += (receive[1] - '0')*100;
			number += (receive[2] - '0')*10;
			number += receive[3] - '0';
			digit = receive[5] - '0';
			break;
		case 5:
			number = (receive[0] - '0')*10000;
			number += (receive[1] - '0')*1000;
			number += (receive[2] - '0')*100;
			number += (receive[3] - '0')*10;
			number += receive[4] - '0';
			digit = receive[6] - '0';
			break;
	}
	printf("%d %d", number, digit);
	return 0;
}

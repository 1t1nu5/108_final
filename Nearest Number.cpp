#include <stdio.h>
int main()
{
	int number, digit;
	scanf("%d %d", &number, &digit);
	if (number%10 == digit)
	{
		printf("%d", number);
		return 0;
	}
	do
	{
		number++;
	}
	while (number%10 != digit);
	printf("%d", number);
	return 0;
}

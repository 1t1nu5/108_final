#include <stdio.h>
int main()
{
	int number, digit;
	scanf("%d %d", &number, &digit);
	number++;
	while (number%10 != digit)
	{
		number++;
	}
	printf("%d", number);
	return 0;
}

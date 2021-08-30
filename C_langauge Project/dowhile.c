#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum = 0;
	int num = 1;
	int even;
	do
	{
		even = 2 * num;
		sum += even;
		num++;
	} while (even < 100);
	printf("%d", sum);
		return 0;
}
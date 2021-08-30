#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0;

	while (num1 < 5)
	{
		while (0 <num2)
		{
			printf(" %-1d",0);
			num2--;
		}
		printf(" * \n");
		num1++;
		num2 = num1;
	}
	return 0;
}
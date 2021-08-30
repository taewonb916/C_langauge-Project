#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int fac = 1;

	printf("정수 입력 : "), scanf("%d", &num);
	int n = num;

	for (; n > 0; n--)
	{
		fac *= n;
	}
	printf("%d! = %d", num, fac);
	return 0;
}
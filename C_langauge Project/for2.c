#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int fac = 1;

	printf("���� �Է� : "), scanf("%d", &num);
	int n = num;

	for (; n > 0; n--)
	{
		fac *= n;
	}
	printf("%d! = %d", num, fac);
	return 0;
}
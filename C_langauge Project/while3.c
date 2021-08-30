#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 1;
	int sum = 0;
	int num1 = 1;

	while (num1 != 0)
	{
		printf("정수 입력 : "), scanf("%d", &num);	
		sum += num;
		num1 = num;
	}
	printf("정수의 합 : %d", sum);
	return 0;
}
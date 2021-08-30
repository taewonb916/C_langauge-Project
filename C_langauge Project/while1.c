#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2 = 0;
	
	printf("양의 정수 입력 : "),scanf("%d", &num1);

	while (num2 < num1)
	{
		printf("Hello World! \n");
		num2++;
	}
	return 0;
}
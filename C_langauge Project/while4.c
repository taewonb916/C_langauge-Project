#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2 = 9;

	printf("���ϴ� ������ �Է� : "), scanf("%d", &num1);

	while (num2 > 0)
	{
		printf("%d X %d = %d \n", num1, num2, num1 * num2);
		num2--;
	}
	return 0;
}
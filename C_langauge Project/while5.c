#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2 = 0;
	int sum = 0;
	int num3;

	printf("���� �Է� ���� : "), scanf("%d", &num1);

	while (num2 < num1)
	{
		printf("���� �Է� : "), scanf("%d", &num3);
		sum += num3;
		num2++;
	}
	printf("Average : %f", (double)sum /num1);
	return 0;
}
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;	// num1 < num2
	int sum = 0;
	int i;

	printf("�� ���� ���� �Է� : "), scanf("%d %d", &num1, &num2);

	for (; num1 <= num2; num1++)
	{
		sum += num1;
	}
	printf("�� ���� ������ ������ �� : %d \n", sum);
	return 0;

}
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;
	int num2 = 0;
	int sum = 0;

	while (num2 < 5)
	{
		printf("���� �Է� : "), scanf("%d", &num1);
		sum += num1;
		num2++;
		while (num1 <= 1)
		{
			printf("�ٽ� �Է��Ͻÿ�. \n");
			num2 = 0;
			num1++;
		
		}
		
		
	}
	printf("������ �� %d \n", sum);
	return 0;
}
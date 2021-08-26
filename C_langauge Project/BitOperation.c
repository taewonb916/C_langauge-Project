#include <stdio.h>

int main(void)
{
		int num;
		printf("입력된 정수:"), scanf_s("%d", &num);
		num = ~num + 1;
		printf("%d", num);
	return 0;
}
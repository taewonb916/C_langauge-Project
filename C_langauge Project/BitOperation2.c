#include <stdio.h>

int main(void)
{
	int num = 3;
	printf("dont use BitOperation : 3 X 8 / 4 = %d \n", num * 8 / 4);
	printf("use BitOperation : 3 X 8 / 4 = %d \n", (num <<3)>>2);

	return 0;

	

}
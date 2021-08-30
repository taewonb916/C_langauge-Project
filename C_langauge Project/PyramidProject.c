#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*20210830
* pyramid game
* loop pratice project
* made by Park
*/

int main(void)
{
	printf("--------------------Pyramid Game--------------------\n");

	int floor;
	int	i;

	printf("How many floors do you want? \n"), scanf("%d", &floor);
	int k = floor;

	for (;floor > 0;floor--)
	{
		for (i = 0; i < floor; i++)
		{
			printf(" ");
		}
		for ( ; i <= k ; i++)
		{	
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


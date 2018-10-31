#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	printf(" ");
	scanf_s("%d", &j);
	printf("\n");
	int num[500];
	
	for (i = 0; i < j; i++)

	{
		num[0] = 0;
		num[1] = 1;
		if (i >= 2)
		{
			num[i] = num[i - 1] + num[i - 2];
		}
		printf("%d", num[i]);
	}



	system("pause");
}
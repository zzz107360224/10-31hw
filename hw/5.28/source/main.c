#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a;
	printf("輸入一個大寫英文:");
	scanf_s("%c", &a);
	a = a + 32;
	printf("%c\n", a);
	system("pause");
}
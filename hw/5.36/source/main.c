#include<stdio.h>
#include<stdlib.h>
void qwer(int, int, int, int);

int main(void)
{
	int i;
	printf("�`�@���h�ֶ�L�n�h?\n");
	scanf_s("%d", &i);
	qwer(i, 1, 2, 3);
	system("pause");
	return 0;
}

void qwer(int i, int begin, int mid, int dest)
{
	if (i == 1)
		printf("%d �ӽL�l�q�� %d �Ӷ𲾨�� %d �Ӷ�\n", i, begin, dest);
	else
	{
		qwer(i - 1, begin, dest, mid);
		printf("�N�� %d �ӽL�l�q�� %d �Ӷ𲾨�� %d �Ӷ�\n",
			i, begin, dest);
		qwer(i - 1, mid, begin, dest);
	}
}
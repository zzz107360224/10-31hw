#include <stdio.h>
#include <stdlib.h>

double  power(int, int);
int main(void)
{
	int x, y,c;
	printf("輸入兩個數字 ");
	scanf_s("%d %d", &x, &y);
	c=power(x, y);
	
	printf("最小公倍數為:%d\n", c);






	system("pause");
}
double  power(int a, int b)
{

	int i, z, f,j,k;
	z = 1;
	k = 1000000;
	for (i = 1; i<=a; i++)
	{
		if (a%i == 0)
		{
			if (b%i == 0)
			{
				for (j = 0; j <= k; j++)
				{
					a = a / i;
					b = b / i;
					z = z * i;
					if (a%i!=0)
					{
						j = k;
					}
					if (b%i != 0)
					{
						j = k;
					}
				}
			}
		}
	}
	f = z * a*b;
	return f;


}
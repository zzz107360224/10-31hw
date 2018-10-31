#include <stdio.h>
#include <stdlib.h>

double power(float, int);
int main(void)
{
	int c;
	float a, b;
	printf("輸入兩個值:");
	scanf_s("%f %d", &a, &c);
	b = power(a,c);
	printf("%.3f的%d次方為:%.3f\n", a, c, b);
	
	system("pause");

}
double power(float x, int n)
{
	int i;
	double h;
	h = 1;
	for (i = 0; i < n; i++)
	
		h = h * x;
	
	return h;

}
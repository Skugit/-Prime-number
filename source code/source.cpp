#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a,i,j,k,l,yu,x;
	printf("input x\n");
	scanf_s("%d", &x);
	a =1;
	l = 0;
	for (i = 1; i < x; i++)
	{
		a++;
		k = 0;
		for (j = 2; j <=a-1; j++)
		{
			yu = a%j;
			if (yu != 0)
			{
				k++;
			}
		}
		if (k == a - 2)
		{
			printf("%d is a Prime number\n", a);
			l++;

		}
	}
	printf("sum of Prime number is %d\n", l);
	system("pause");
}
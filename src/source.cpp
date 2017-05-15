#include<stdio.h>
#include<stdlib.h>
#define N 100
int prime(int x);


int main()
{
	int a,i,k=0;
	for(i=1;i<=N;i++)
	{
		a=prime(i);
		if(a==1)
		{
			printf("%d is a prime number\n",i);
			k++;
		}
	}
	printf("sum of prime unmber is %d",k);
    system("pause");
}

int prime(int x)
{
	int j,k=0,yu;

	for (j = 2; j <=x-1; j++)
		{
			yu = x%j;
			if (yu != 0)
			{
				k++;
			}
		}
		if (k == x - 2)
		{
			return 1;
		}

return 0;

}
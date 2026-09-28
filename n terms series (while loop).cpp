// 2+5+8+11+14+....upto n terms. w.c.p to calculate sum of the given series.
#include<stdio.h>
int main()
{
	int i=2,n,sum=0,c=1;
	printf("Enter n:");
	scanf("%d",&n);
	while(c<=n)
	{
		sum=sum+i;
		i+=3;
		c++;
		
	}
	printf("The sum is:%d",sum);
	return 0;
}

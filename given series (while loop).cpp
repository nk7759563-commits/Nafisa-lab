// 1+2+4+7+11+..upto n terms.w.c.p to calculate sum of the given series.
#include<stdio.h>
int main()
{
	int i=1,n,sum=0,c=0,b=1;
	printf("enter n:");
	scanf("%d",&n);
	while(c<n)
	{
		printf("%d\t",i);
		sum=sum+i;
		i=i+b;
		c++;
		b++;
	}
		
		
		printf("\nThe sum is:%d",sum);
	return 0;
}

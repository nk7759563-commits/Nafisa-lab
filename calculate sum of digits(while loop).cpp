//w.c.p. to calculate sum of digits
#include<stdio.h>
int main()
{
	int n,digit,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		n=n/10;
		sum=sum+digit;
	
	}
	printf("sum of digits=%d",sum);
	return 0;
}

// w.a.c program to check weather a number is perfect or not
#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		s+=i;
	}
	if(s==n)
	printf("It's a perfect number ");
	else
	printf("It's not a perfect number");
	return 0;
}

// w.a.c program to check weather a number is perfect or not
#include<stdio.h>
int main()
{
	int n,s=0,i=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		s+=i;
		i++;
	}
	if(s==n)
	printf("It's a perfect number");
	else
	printf("It's not a perfect number");
	return 0;
}

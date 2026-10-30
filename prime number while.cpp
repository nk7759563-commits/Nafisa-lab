// w.a.c program to check weather a number is prime or not using while and for loop.
#include<stdio.h>
int main()
{
	int n,i=2, count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0){
			count++;
			break;
		}
		i++;
	}
	if(n>1 && count==0)
		printf("%d is a prime number",n);
	
	else 
		printf("%d is not a Prime number");
	return 0;
	}

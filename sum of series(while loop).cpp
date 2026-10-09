/* w.c.p to find the sum of the following series:
1+10+101+1010+..... upto n terms*/
#include<stdio.h>
int main()
{
	int n,i=1,term=1;
	long long sum=0;
	printf("Enter the no of term:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2!=0)
		{
			term=term*10+1;
		}
		else
		{
			term=term*10;
			//sum=sum+term;
			// printf("%d",term;
		}
		i++;
		sum=sum+term;
		// if(i<n)
	}
	printf("\nsum=%d",sum);
	return 0;
	
}

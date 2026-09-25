/* write a c program to find sum of the following series 1!+3!+5!+.....upto n!*/
// 1! = 1
// 3! = 3*2*1 = 6
// 5! = 5*4*3*2*1 = 120
// upto n!
#include<stdio.h>
int main()
{
	int i=1,c=1,a=1,n;
	long int fact,sum=0;
	printf("enter the no of terms:");
	scanf("%d",&n);
	while(c<=n){ // outer ... it true
	i=1;
	fact=1;
    
	while(i<=a){ // inner
	fact=fact*i;
	i++;
	}
	sum=sum+fact;
	c++;
	a=a+2;
}
printf("sum of the numbers=%d",sum);
return 0;
	
}


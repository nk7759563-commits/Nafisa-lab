// w.a.c.p to find largest element within an array
#include<stdio.h>
int main()
{
	int i,n,max;
	printf("enter the size of an array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a[n];
		max=a[0];
		printf("enter the elements:");
		scanf("%d",&a[i]);
		if(a[i>max])
		{
			max=a[i];
			
		}
	}
	printf("Largest=%d",max);
	return 0;


	
}

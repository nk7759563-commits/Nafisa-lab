// w.a.c.p to find smallest element within an array
#include<stdio.h>
int main()
{
	int i,n,min;
	printf("enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a[n];
		min=a[0];
		printf("enter the elements:");
		scanf("%d",&a[i]);
		if(a[i]<min)
		{
			min=a[i];
		}
			}
			printf("smallest=%d",min);
			return 0;
}

/* w.a.c.p to print the following pattern
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
 */
 #include<stdio.h>
 int main()
 {
 	int n,i,j,k;
 	printf("Enter the number:");
 	scanf("%d",&n);
 	for(i=n;i>=1;i--)
 	{
 		for(k=0;k<n-i;k++)
 		{
 			printf(" ");
		 }
		 for(j=1;j<=i;j++)
		 {
		 	printf("%d ",j);
		 }
		 printf("\n");
	 }
	 return 0;
		}       

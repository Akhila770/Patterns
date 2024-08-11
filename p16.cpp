#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			if(i==1 || i==n || j==i || j==n)
			printf("*");
			else
			printf(" ");
		}
		for(j=1;j<i;j++)
		{
			if(i==n ||j==n || j==(2*i-1) )
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}


/*

enter value of n:5
     *
    ***
   *****
  *******
 *********
 
 
 */

#include<stdio.h>
int main()
{
	int i,j,n;
	printf(" enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1 || i==n || j==1 || j==i)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}


/* enter value of n:6
*
* *
*   *
*     *
*       *
* * * * * *           */

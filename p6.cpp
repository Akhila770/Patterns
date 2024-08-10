#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=n;j>=1;j--)
		{
			if(i==1 || i==n || j==1 || j==n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n || i==j || j==(n-i+1) )
			{ 
				printf("*");
			}
			else if(j+i+1==n){
				printf("* ");
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

/* output 
enter n:5
*****
** **
* * *
** **
*****   */

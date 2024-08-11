#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf("  ");
		}
		for(j=i;j<=n;j++)
		{
			if(i==n || i==1 || j==n || i==j)
			printf("* ");
			else
			 printf("  ");
		}
		printf("\n");
	}
}



/*


enter value of n:5
* * * * *
  *     *
    *   *
      * *
        *
        
        
        
        */

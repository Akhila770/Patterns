#include<stdio.h>
int main()
{
	int i,j,n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
       {
       	printf(" ");
	   }
	   for(j=n;j>=i;j--)
	   {
	   	printf("*");
	   }
	   for(j=i;j<n;j++)
	   {
	   	printf("*");
	   }
	   printf("\n");
	}
}


/*

enter value of n:5
 *********
  *******
   *****
    ***
     * 
     
     
     */
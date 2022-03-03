#include <stdio.h>
int main()
{
	int n,i,j,k,z=1;
	printf("enter a no:");
	scanf("%d",&n);
	    for(i=1;i<=n;i++)
		{
		
		 for(j=n-i;j>=1;j--)
		
		      {
			  
	              printf(" ");
	          }
	         for(k=1;k<=z;k++)
	         {
	         	printf("%d",z);
	         }
	         z=z+2;
	         	 printf("\n");
			    	 
	    }
	   return 0;    
}


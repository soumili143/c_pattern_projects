#include <stdio.h>
int main()
{
    int n,i,j,k,z=1;
	printf("enter a no:");
	scanf("%d",&n);
	    for(i=n;i>=1;i--)
		{
		
		 for(k=n-1;k>=i;k--)
		
		      {
			  
	              printf(" ");
	          }
	         for(j=i;j>=1;j--)
	         {
	         	printf("* ");
	         }
	         z=z-2;
	         	 printf("\n");
			    	 
	    }
	   return 0;    
}


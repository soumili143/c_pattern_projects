#include <stdio.h>
int main()
{
    int n,i,j,k,z=1;
	printf("enter a no:");
	scanf("%d",&n);
	    for(i=1;i<=n;i++)
		{
		
		 for(j=n-1;j>=i;j--)
		
		      {
			  
	              printf(" ");
	          }
	         for(k=z;k>=1;k--)
	         {
	         	printf("%d",abs(k-i));
	         }
	         z=z+2;
	         	 printf("\n");
			    	 
	    }
	   return 0;    
}


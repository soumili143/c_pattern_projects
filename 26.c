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
	         for(k=i-1;k>=-(i-1);k--)
	         {
	         	printf("%d",i-abs(k));
	         }
	         
	         	 printf("\n");
			    	 
	    }
	   return 0;    
}


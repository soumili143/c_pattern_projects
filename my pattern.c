#include <stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("enter any number");
    scanf("%d",&n);
	    for(i=1;i<=n;i++)
		{
		
		 for(j=1;k<=n-i;j++)
		
		      {
			  
	              printf(" ");
	          }
	         for(k=0;k<=(2*i-1);k++)
	         {
	         	printf("*");
	         	  k++;
	         }
	             k=0;
	             printf("\n");	    	 
	    }
	    n--;
	    for(i=n;i>=1;i--)
	    
	    {
	    	for(j=0;j<=n-i;j++)
	    	  printf(" ");
		}
		k=0;
		for(k=0;k<=(2*i-1);k++)
		     printf("*");
		     k++;
		    printf("\n");
	   return 0;    
}


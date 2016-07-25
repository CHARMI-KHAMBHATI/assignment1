#include<stdio.h>

void main()
{
  int a[50],n,i,max,min;

	printf("Enter the number of elements (max 50) \n");
	scanf("%d",&n);
	max=0;
	min=a[0];
	
	for(i=0;i<n;i++)
	{  
	  printf("Enter elements %d \n",(i+1));
	  scanf("%d",&a[i]);
	  
	  if(min>a[i])
 	     {  min=a[i];		
		}
		
		if(max<a[i])
	     {  max=a[i];
		}
	}
	
	
	printf("The  maximum age is %d \n",max);
	printf("The minimum age is %d \n",min);
       
  
}

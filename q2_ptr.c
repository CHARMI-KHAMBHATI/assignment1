#include<stdio.h>

int main()
{
  int a[50],n,i,*max,*min;

	printf("Enter the number of elements (max 50) \n");
	scanf("%d",&n);
	max=a;
	min=a;
	
	for(i=0;i<n;i++)
	{  
	  printf("Enter elements %d \n",(i+1));
	  scanf("%d",&a[i]);
	  
	  if(*min>a[i])
 	     {  min=&a[i];		
		}
		
		if(*max<a[i])
	     {  max=&a[i];
		}
	}
	
	
	
	printf("The  maximum age is %d \n",*max);
	printf("The minimum age is %d \n",*min);
	return 0;
       
  
}

#include<stdio.h>

void main()
{
  float sum=0, *ptr;
  float avg;
  int i,n;
  float a[25];
  

	printf("Enter the number of elements (max 25) \n");
	scanf("%d",&n);
	
	 
	ptr=a;
	
	for(i=0;i<n;i++)
	{  
	  printf("Enter element %d  \n",(i+1));
	  scanf("%f",&a[i]);
	  
	}
	
	for(i=0;i<n;i++)
	{  
	  sum=sum+*ptr;
	  ptr++;
	  
	}
	
	
	
	avg=(sum/n);
	
	printf("The sum of the elements is %4.3f \n",sum);
	printf("The average of the elements is %4.3f \n",avg);
       
  
}

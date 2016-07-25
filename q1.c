#include<stdio.h>

void main()
{
  float a[50],n,sum=0;
  float avg;
  int i;

	printf("Enter the number of elements (max 50)\n");
	scanf("%f",&n);
	
	for(i=0;i<n;i++)
	{  
	  printf("Enter element %d \n",(i+1));
	  scanf("%f",&a[i]);
	  sum=sum+a[i];
	}
	
	avg=(sum/n);
	
	printf("The sum of the elements is %4.3f \n",sum);
	printf("The average of the elements is %4.3f \n",avg);
       
  
}

#include<stdio.h>

void main()
{   int i,j,pos,n;
	float a[25], num;
	
	printf("Enter the number of elements (max 25) \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{  
	  printf("Enter elements %d \n",(i+1));
	  scanf("%f",&a[i]);
	  
	}
	
	printf("Enter the position of new element \n");
	scanf("%d",&pos);
	pos--;
	n++;
	
	if(n<25){
		
		printf("Enter element \n");
		scanf("%f",&num);
	

	for(i=n;i>pos;i--)
	{
		 *(a+i) = *(a+i-1);
	}
	
	*(a+pos)=num;
	
	printf("Now the array is\n");
	
	for(i=0;i<n;i++)
	{  
	  printf("Element %d ..... %4.3f\n",(i+1),*(a+i));
	  
	}
		
	}
	
	else{
		printf("Maximum limit reached \n");
	}
		
	
}

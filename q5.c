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
	
	printf("Enter the position of  element to delete \n");
	scanf("%d",&pos);
	pos--;
	n--;
	
	if(pos<=n){

	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];	
	}
	
	
	printf("Now the array is\n");
	
	for(i=0;i<n;i++)
	{  
	  printf("Element %d ..... %4.3f\n",(i+1),a[i]);
	  
	}
		
	}
		
	else{
		printf(" Il-legal position entered \n");
	}
	
}

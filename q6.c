#include<stdio.h>

struct minmax get_maxmin(float a[], int);

struct minmax{
	
	 float max , min;
};

void main()
{
  int n,i;
   float a[50];
   
   

	printf("Enter the number of elements (max 50) \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{  
	  printf("Enter elements %d \n",(i+1));
	  scanf("%f",&a[i]);
	}
	
	struct minmax m=get_maxmin(a,n);
	
	printf("The maximum element is %d \n",m.max);
	printf("The minimum element is %d \n",m.min);
       
  
}

struct minmax get_maxmin(float a[], int n)
{	int i;
	float max, min;
	struct minmax m;
	
	max=a[0];
	min=a[0];
	
	printf("1 The maximum element is %d \n",max);
	printf("1 The minimum element is %d \n",min);
	for(i=0;i<n;i++)
	{

	 	if(min>a[i])
	 	    {  min=a[i];
			 
			}
			
		else
		if(max<a[i])
		    {  max=a[i];
		   
			}
	}
	
	m.max=max;
	m.min=min;
	
	printf("2 The maximum element is %d \n",max);
	printf("2 The minimum element is %d \n",min);
	
	return m;


}

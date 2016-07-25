#include<stdio.h>

void main()
{
  float a[50],*max,*min, *sec_max, *sec_min;
  int n,i, max_idx, min_idx;

	printf("Enter the number of elements  (max 50)\n");
	scanf("%d",&n);
	
	max=a;
	min=a;
	
	
	for(i=0;i<n;i++)
	{  
	  printf("Enter elements %d \n",(i+1));
	  scanf("%f",&a[i]);
	  
	}
	
	for(i=0;i<n;i++)
	{

	 	if(*min>a[i])
	 	    {  min=&a[i];
			 min_idx=i;		
			}
			
		else
		if(*max<a[i])
		    {  max=&a[i];
		    max_idx=i;
			}
	}
	
	sec_max=a;
	sec_min=a;
	for(i=0;i<n;i++)
	{

	 	if(((*sec_min)>a[i])&&(i!=min_idx))
	 	    { sec_min=&a[i];
					
			}
			
		else
		if(((*sec_max)<a[i])&&(i!=max_idx))
		    {  sec_max=&a[i];
		    
			}
	}
	 
	printf("The second maximum element is %f \n",*sec_max);
	printf("The second minimum element is %f \n",*sec_min);
       
       
  
}

#include<stdio.h>

struct weight{
 int kg;
 int gram;
};

typedef struct weight WEIGHT;

void main()
{
  WEIGHT w1,w2;
  float ip1, ip2;
  int kg;
  int grms;

  printf("Enter weight1 \n");
  scanf("%f",&ip1);
  printf("Enter weight2 \n");
  scanf("%f",&ip2);

  w1.kg=ip1;
  w2.kg=ip2;
	
	w1.gram=(ip1-w1.kg)*1000;
	w2.gram=(ip2-w2.kg)*1000;
 
  kg=w1.kg+w2.kg;
  grms=w1.gram+w2.gram;
  
  kg=kg+(grms/1000);
  grms=grms%1000;

	printf(" THe total weight is %d kg and %d grms\n", kg, grms);
}

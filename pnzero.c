#include<stdio.h>
int main()
{
  float num;
  printf("enter a number:");
  scanf("%f",&num);
  	
  	if(num==0)
  	printf("%f is zero",num);
  		
  		else if(num>0)
  		printf("%f is positive number\n",num);
  		
  		else
  		printf("%f is negative number\n",num);
  		
}

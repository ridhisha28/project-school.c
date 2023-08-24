#include<stdio.h>
int main()
{
 int num1;
 int num2;
 int result;
 printf("\n Enter first number\n ");
 scanf("%d",&num1);
 
 printf("\n Enter second number\n ");
 scanf("%d",&num2);
 
 result = num1+num2;
 printf("\n Addition of given numbers\t:%d\n",result);
 
 result = num1-num2;
 printf("\n subtraction of given numbers\t:%d\n",result);
 
 result = num1*num2;
 printf("\n multiplication of given numbers\t:%d\n",result);
 
 result = num1/num2;
 printf("\n division of given numbers\t:%d\n",result);
 
 return 0;
}

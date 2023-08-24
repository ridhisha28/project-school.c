#include<stdio.h>
int main()
{
   int choice,num1,num2,result;
   
   printf("\n________________________________");
   printf("\n__________CALCULATOR____________");
   printf("\n________________________________");
   printf("\nList of operations:\n");
   printf("\nS.N.\tOperations\n");
   printf("\n1\tAddition\n");
   printf("\n2\tsubtraction\n");
   printf("\n3\tmultiplication\n");
   printf("\n4\tdivision\n");
   
   printf("\nWhich operation you want to perform\n");
   scanf("%d",&choice);
   
   switch(choice)
   {
   	case 1:
   	printf("\n Enter the first number:\n");
   	scanf("%d",&num1);
   	printf("\n Enter the second number:\n");
   	scanf("%d",&num2);
   	result= num1 + num2;
   	printf("\n Addition of given numbers \t:%d\n",result);
   	break;
   	
   	case 2:
   	printf("\n Enter the first number:\n");
   	scanf("%d",&num1);
   	printf("\n Enter the second number:\n");
   	scanf("%d",&num2);
   	result= num1 - num2;
   	printf("\n Subtraction of given numbers \t:%d\n",result);
   	break;
   	
   	case 3:
   	printf("\n Enter the first number:\n");
   	scanf("%d",&num1);
   	printf("\n Enter the second number:\n");
   	scanf("%d",&num2);
   	result= num1 * num2;
   	printf("\n multiplication of given numbers \t:%d\n",result);
   	break;
   	
   	case 4:
   	printf("\n Enter the first number:\n");
   	scanf("%d",&num1);
   	printf("\n Enter the second number:\n");
   	scanf("%d",&num2);
   	result= num1 / num2;
   	printf("\n division of given numbers \t:%d\n",result);
   	break;
   	
   	default:
   	printf("\n Enter valid input\n");
   }
     return 0;
}



#include<stdio.h>
void addition();      //function prototypes
void subtraction();
void multiplication();
void division();
int main(){
	addition(); ///function call
	return 0;
}
void addition(){	//function defination
int num1,num2,result;
	printf("\n Provide inputs for addition operation\n");
	printf("\nEnter the first number\n");
	scanf("%d",&num1);
	
	printf("\nEnter the second number\n");
	scanf("%d",&num2);
	
	result=num1+num2;
	printf("\nAddition of given numbers\t:%d\n",result);
}
void subtraction(){	//function defination
int num1,num2,result;
	printf("\n Provide inputs for subtraction operation\n");
	printf("\nEnter the first number\n");
	scanf("%d",&num1);
	
	printf("\nEnter the second number\n");
	scanf("%d",&num2);
	
	result=num1-num2;
	printf("\nSubtraction of given numbers\t:%d\n",result);
}
void multiplication(){	//function defination
int num1,num2,result;
	printf("\n Provide inputs for multiplication operation\n");
	printf("\nEnter the first number\n");
	scanf("%d",&num1);
	
	printf("\nEnter the second number\n");
	scanf("%d",&num2);
	
	result=num1*num2;
	printf("\n Multiplication of given numbers\t:%d\n",result);
}
void division(){	//function defination
int num1,num2,result;
	printf("\n Provide inputs for division operation\n");
	printf("\nEnter the first number\n");
	scanf("%d",&num1);
	
	printf("\nEnter the second number\n");
	scanf("%d",&num2);
	
	result=num1/num2;
	printf("\n Division of given numbers\t:%d\n",result);
}
	
	

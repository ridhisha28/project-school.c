#include<stdio.h>
void addition();      //function prototypes
void subtraction();
void multiplication();
void division();
int main(){

 int op,choice;
 
 do{
 	printf("\n #################################################");
 	printf("\n ################CALCULATOR APP###################");
 	printf("\n #################################################");
 	printf("\n ##############LIST OF OPERATIONS#################");
 	printf("\n S.N\tOperation\n");
 	printf("\n\t1\tAddition\n");
 	printf("\n\t2\tSubtraction\n");
 	printf("\n\t3\tMultiplication\n");
	printf("\n\t4\tDivision\n");
 	printf("\n\tWhich operation you want to perform\n");
 	scanf("%d", &op);
 
 	switch(op){
 		case 1:
 		addition();
 		break;
 	
 		case 2:
 		subtraction();
 		break;
 		
 		case 3:
 		multiplication();
 		break;
 		
 		case 4:
 		division();
 		break;
 		
 	default:
 	printf("\n Enter the valid input\n");
 	
 	}
 	printf("\n Do you want to perform another operation....1-yes,0-no\n");
 	scanf("%d",&choice);
 	
 	}while(choice==1);
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
 
 

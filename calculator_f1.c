#include<stdio.h>
int addition(int,int);      //function prototypes
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);
int main(){

 int num1 ,num2, temp, op,choice;
 
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
 	
 	printf("\n ENter the first number\t:\n");
 	scanf("%d", &num1);
 
 	printf("\n ENter the second number\t:\n");
 	scanf("%d", &num2);
 	
 	switch(op){
 		case 1:
 		temp = addition(num1,num2);
 		printf("\nAddition of given numbers\t:%d\n",temp);
 		break;
 	
 		case 2:
 		subtraction(num1,num2);
 		printf("\nsubtraction of given numbers\t:%d\n",temp);
 		break;
 		
 		case 3:
 		multiplication(num1,num2);
 		printf("\nMultiplication of given numbers\t:%d\n",temp);
 		break;
 		
 		case 4:
 		division(num1,num2);
 		printf("\nDivision of given numbers\t:%d\n",temp);
 		break;
 		
 	default:
 	printf("\n Enter the valid input\n");
 	
 	}
 	printf("\n Do you want to perform another operation....1-yes,0-no\n");
 	scanf("%d",&choice);
 	
 	}while(choice==1);
 	return 0;
 }	
int addition(int n1,int n2){	        //function defination

	return(n1+n2);
}
int subtraction(int n1,int n2){	//function defination
	return(n1-n2);
	
}
int multiplication(int n1,int n2){	//function defination

	return(n1*n2);
}
int division(int n1, int n2){	//function defination

	return(n1/n2);
}	
	
	


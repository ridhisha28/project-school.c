#include<stdio.h>
int main()
{
	int num,choice=1;
	while(choice==1)
        {
        	printf("\n Enter any number\n");
		scanf("%d",&num);
	
		if(num%3==0 && num%5==0)
		   printf("\n FizzBuzz\n");
		else if(num%3==0)
		   printf("\nBuzz\n");
		else if(num%5==0)
		   printf("\nFizz\n"); 
		else 
		   printf("\n Enter a valid number\n");
		  
		printf("\n Do you want to play again?...press 1 for yes , press 0 for no\n"); 
		scanf("%d",&choice);
        }
		return 0;  
}

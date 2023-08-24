#include<stdio.h>
struct cars{
	char company[20];
	char name[20];	
	int seaters;
	char brand[20];
	char model[20];
};
int main(){
	struct cars s1;
	printf("\n Enter the name of Car\n");
	scanf("%s", s1.name);
	fflush(stdin);
	
	printf("\n Enter the name of company\n");
	scanf("%s", s1.company);
	
	printf("\n Enter the name of brand\n");
	scanf("%s", s1.brand);
	
	printf("\n Enter the number of seats\n");
	scanf("%d", &s1.seaters);
	
	printf("\n Enter the model of car\n");
	scanf("%s", s1.model);
	
	printf("\n Details of car are as follows:\n");
	
	printf("\n Name of car is %s\n", s1.name);
	
	printf("\n Company of car is %s\n", s1.company);
	
	printf("\n Car's brand is %s\n", s1.brand);
	
	printf("\n Number of seats in car is %d\n", s1.seaters);
	
	printf("\n Model of car is %s\n", s1.model);
	                           	
	return 0;
	
}

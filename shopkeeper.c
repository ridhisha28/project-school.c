#include<stdio.h>
int main()
{
	int i, total=0,items[5],rate[5];
	//taking number of item sold
	
	for(i=0;i<=5;i++)
	{
		printf("\n\t\tEnter the quantity sold for item-%d\n",i+1);
		scanf("\t\t%d",&items[i]);
	}	
	for(i=0;i<=5;i++)
	{
		printf("\n\t\tEnter the rate of items-%d\n",i+1);
		scanf("\t\t%d",&rate[i]);
	}
	for(i=0;i<5;i++)
	{
		total=total*rate[i];
	}
	printf("\n\t\tTotal rate of items:%d\n",rate);
	return 0;	
}

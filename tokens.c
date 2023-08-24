#include<stdio.h>
int main()
{
	int tokens[10],i;
	printf("\nEnter the token numbers\n");
	for(i=0;i<10;i++){
	printf("\nEnter the token-%d\n",i);
	scanf("%d",&tokens[i]);
	}
	printf("\nThe token numbers are as follows:\n");
	for(i=0;i<10;i++){
	printf("%d\n",tokens[i]);
	}
	return 0;

}

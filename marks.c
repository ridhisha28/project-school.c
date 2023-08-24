#include<stdio.h>
int main()
{
	int marks[7],i, total=0;
	float per;
	printf("\nEnter the marks obtained by the student\n");
	for(i=1;i<=7;i++){
	printf("\nEnter the marks obtained obtained in subject-%d\n",i);
	scanf("%d",&marks[i-1]);
	}
	for(i=1;i<7;i++){
		total=total+marks[i];
	}
	per=total/7.0;
	printf("\nTotal marks\t:%d",total);
	printf("\nPercentage\t:%f\n",per);	
	return 0;

}

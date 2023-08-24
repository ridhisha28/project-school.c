#include<stdio.h>
float main()
{
	float num1,num2,num3;
	printf("Enter the values of num1,num2,num3\t:");
	scanf("%f%f%f",&num1,&num2,&num3);
		if(num1>num2 && num1>num3)
		   printf("%f is greatest\n",num1);
		if(num2>num1 && num2>num3)
		   printf("%f is greatest\n",num2);
		if(num3>num1 && num3>num2)
		   printf("%f is greatest\n",num3);
}

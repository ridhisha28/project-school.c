#include<stdio.h>
enum weekdays{
	Monday=10,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};
int main()
{
	enum weekdays day1= Monday;
	enum weekdays day2= Tuesday;
	enum weekdays day3= Wednesday;
	enum weekdays day4= Thursday;
	enum weekdays day5= Friday;
	enum weekdays day6= Saturday;
	enum weekdays day7= Sunday;
	printf("\n Value of Day-1 is %d\n",day1);
	printf("\n Value of Day-2 is %d\n",day2);	
	printf("\n Value of Day-3 is %d\n",day3);
	printf("\n Value of Day-4 is %d\n",day4);	
	printf("\n Value of Day-5 is %d\n",day5);	
	printf("\n Value of Day-6 is %d\n",day6);	
	printf("\n Value of Day-7 is %d\n",day7);		
	return 0;
}

#include<stdio.h>
struct student{
	char name[20];
	int roll_no;
	int section;
	
};
int main(){
	struct student s1;
	printf("\n Enter the name of student\n");
	scanf("%s", s1.name);
	fflush(stdin);
	
	printf("\n Enter the roll no of student\n");
	scanf("%d", &s1.roll_no);
	
	printf("\n Enter the section of student\n");
	scanf("%d",& s1.section);
	
	printf("\n Details of students are as follows:\n");
	
	printf("\n Name of student is %s\n", s1.name);
	
	printf("\n Roll no of student is %d\n", s1.roll_no);
	
	printf("\n Section of student is %d\n", s1.section);
	
	return 0;
	
}

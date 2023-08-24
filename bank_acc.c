/*Develop a mini application for bank account system.
1. account holder details
2. balance details
3. withdrawal system
4. deposit */

#include<stdio.h>
int main()
{
	int acc_no[20], dob[20], addhar_no[20], mob_no[10];
	char name[50], gender[50], add[50];
	
	printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\t\t^^^^^^^^^^^^^^^^Welcome to Axis Bank^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");	
	printf("\t\t^^^^^^^^^^^^^^^^^List of operations^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\n");
	
	printf("\t\t|\t Name of account holder\t\t:\t\t\t|");
	gets(name);

	printf("\t\t|\t Address of account holder\t\t:\t\t\t|");
	gets(add);
	
	printf("\t\t|\t Account number of account holder\t:\t\t|");
	gets(acc_no);
	
	printf("\t\t|\t Mobile number of account holder\t:\t\t|");
	gets(mob_no);
	
	printf("\n Date of birth of account holder:\t");
	gets(dob);
	
	printf("\n Addhar number of account holder:\t");
	gets(addhar_no);
	

}


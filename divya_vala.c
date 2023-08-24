#include<stdio.h>
#include<string.h>
int main()
 
{  
   int choice=1, result, quantity, mob_no;
 
 
  //appliances items
   printf("\n\t_________________________________________________________________________\t");
   printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ELECTRONICS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t");
      printf("\n\t~~~~~~~~~~~~~~~~~Welcome to electronics store~~~~~~~~~~~~~~~~~~~~~~~\t");
   printf("\n\t_________________________________________________________________________\t");
   printf("\n\t|\t\t\tELECTRONIC ITEMS\t\t\t\t|\n");
   printf("\n\t|\tS.N.\tPRODUCT NO.\t PRODUCT NAME\t\tPRICE\t\t|\n");
        printf("\n\t|\t1\t094\t\tI-phone13\t\t:60,900\t\t|\n");
    printf("\n\t|\t2\t343\t\tTV\t\t\t:25,000\t\t|\n");
    printf("\n\t|\t3\t478\t\tWASHING MASHINE\t\t:45,000\t\t|\n");
    printf("\n\t|\t4\t232\t\tLAPTOP\t\t\t:60,000\t\t|\n");
        printf("\n\t|\t5\t887\t\tHEATER\t\t\t:25,000\t\t|\n");
    printf("\n\t|\t6\t143\t\tREFRIDGERATOR\t\t:21,000\t\t|\n");
        printf("\n\t|\t7\t325\t\tOVEN\t\t\t:15,000\t\t|\n");
    printf("\n\t|\t8\t121\t\tMIXING GRINDER\t\t:7,000\t\t|\n");
    printf("\n\t|\t9\t234\t\tAIR CONDITIONER\t\t:45,000\t\t|\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   do{
   printf("\n\t_______________________________________________________________________\t\t");
   printf("\n\t________________WHICH APPLIANCES YOU WANT TO BUY_____________________\t\t");
   printf("\n\t_______________________________________________________________________\t\t\n");
   scanf("\t\t%d",&choice);
   
   switch(choice){
   case 1:
   
   printf("\n\t\tEnter the quantity for I-PHONE13:");
   scanf("%d",&quantity);
   result = quantity * 60900;
   printf("\n\t\tCost per I-phone\t\t:60900\n");
   printf("\n\t\tTotal cost of I-PHONE13 is\t:%d", result);
   break;
   
   case 2:
   
   printf("\n\t\tEnter the quantity for TV:");
   scanf("%d",&quantity);
   result = quantity * 25000;
   printf("\n\t\tCost per TV\t\t:25000\n");
   printf("\n\t\tTotal cost of TV is\t:%d", result);
   break;
   
   case 3:
   
   printf("\n\t\tEnter the quantity for WASHING MACHINE:");
   scanf("%d",&quantity);
   result = quantity * 45000;
   printf("\n\t\tCost per WASHING MACHINE\t:45000\n");
   printf("\n\t\tTotal cost of WASHING MACHINE is\t:%d", result);
   break;
   
   case 4:
   
   printf("\n\t\tEnter the quantity for LAPTOP:");
   scanf("%d",&quantity);
   result = quantity * 60000;
   printf("\n\t\tCost per LAPTOP\t:60000\n");
   printf("\n\t\tTotal cost of LAPTOP is\t:%d", result);
   break;
   
   case 5:
   
   printf("\n\t\tEnter the quantity for HEATER:");
   scanf("%d",&quantity);
   result = quantity * 25000;
   printf("\n\t\tCost per HEATER\t:25000\n");
   printf("\n\t\tTotal cost of HEATER is\t:%d", result);
   break;
   
   case 6:
   
   printf("\n\t\tEnter the quantity for REFRIDGERATOR:");
   scanf("%d",&quantity);
   result = quantity * 21000;
   printf("\n\t\tCost per REFRIDGERATOR\t:21000\n");
   printf("\n\t\tTotal cost of REFRIDGERATOR is\t:%d", result);
   break;
   
   case 7:

   printf("\n\t\tEnter the quantity for OVEN:");
   scanf("%d",&quantity);
   result = quantity * 15000;
   printf("\n\t\tCost per OVEN\t:15000\n");
   printf("\n\t\tTotal cost of OVEN is\t:%d", result);
   break;
   
   case 8:

   printf("\n\t\tEnter the quantity for MIXING GRINDER:");
   scanf("%d",&quantity);
   result = quantity * 7000;
   printf("\n\t\tCost per MIXING GRINDER\t:7000\n");
   printf("\n\t\tTotal cost of MIXING GRINDER is\t:%d", result);
   break;
   
   case 9:

   printf("\n\t\tEnter the quantity for AIR CONDITIONER:");
   scanf("%d",&quantity);
   result = quantity * 45000;
   printf("\n\t\tCost per AIR CONDITIONER\t:60900\n");
   printf("\n\t\tTotal cost of AIR CONDITIONER is\t:%d", result);
   break;
   
   default:
  printf("\n\tEnter the valid input\t\n");

       }
       //bill print for every individual project
{

 
char name[20], date[10], contact[20],cost[20];


printf("\n\nEnter the following details of customer\n");
printf("\nEnter the name of customer\t\t\t:");
        scanf("%s",&name);
   
     
printf("\nEnter the date \t\t\t\t:");
scanf("%s",&date);
       
printf("\nEnter the contact of customer\t\t:");
       scanf("%s",&contact);
       printf("\nEnter the Total cost\t\t:");
       scanf("%s",&cost);
       
       
printf("\n\n\t\t======================BILL======================\n");

        printf("\n\t\t Name\t\t: %s",name);
        printf("\n\t\t Date\t\t: %s",date);        
        printf("\n\t\t Contact\t: %s",contact);
        printf("\n\t\t Total cost\t: %s",cost);

}
        printf("\n\n\t\tFor further purchasing enter 1 else 0\t:");
    scanf("%d",&choice);  
      } while(choice==1);
   
}

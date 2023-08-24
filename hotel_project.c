#include<stdio.h>
int main()
{
   int choice,quantity,result,food=1;
   
   printf("\n\t_______________________________________________________\t");
   printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~HOTEL~~~~~~~~~~~~~~~~~~~~~~~~\t");
   printf("\n\t_______________________________________________________\t");
   printf("\n\t|\t\t\tMENU CARD\t\t\t|\n");
   printf("\n\t|\t\t\tS.N. MENU\t\t\t|\n");
        printf("\n\t|\t1\tChicken biryani\t\t:372\t\t|\n");
   	printf("\n\t|\t2\tVeg biryani\t\t:250\t\t|\n");
   	printf("\n\t|\t3\tEgg biryani\t\t:300\t\t|\n");
   	printf("\n\t|\t4\tVeg biryani pack\t:383\t\t|\n");
        printf("\n\t|\t5\tChilli chicken\t\t:264\t\t|\n");
   	printf("\n\t|\t6\tpaneer\t\t\t:186\t\t|\n");
        printf("\n\t|\t7\tChocolate milkshake\t:100\t\t|\n");
   	printf("\n\t|\t8\tCoffee\t\t\t:70\t\t|\n");
   	printf("\n\t|\t9\tmaaza\t\t\t:20\t\t|\n");
   	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   for( ;food==1; )
   
   {
   printf("\nWhich food you want to eat\n");
   scanf("%d",&choice);
   
   switch(choice)
   {
   	case 1:
   	printf("\n Enter the quantity for chicken biryani:\n");
   	scanf("%d",&quantity);
   	result= quantity*372;
   	printf("\n total cost \t:%d\n",result);
   	
   	break;
   	
   	case 2:
   	printf("\n Enter the quantity for veg biryani:\n");
   	scanf("%d",&quantity);
   	result= quantity*250;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	case 3:
   	printf("\n Enter the quantity for egg biryani:\n");
   	scanf("%d",&quantity);
   	result= quantity*300;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	case 4:
   	printf("\n Enter the quantity for veg biryani pack:\n");
   	scanf("%d",&quantity);
   	result= quantity*383;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	case 5:
   	printf("\n Enter the quantity for chilli chicken:\n");
   	scanf("%d",&quantity);
   	result= quantity*264;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	case 6:
   	printf("\n Enter the quantity for paneer:\n");
   	scanf("%d",&quantity);
   	result= quantity*186;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	case 7:
   	printf("\n Enter the quantity for chocolate milkshake:\n");
   	scanf("%d",&quantity);
   	result= quantity*100;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	case 8:
   	printf("\n Enter the quantity for coffee:\n");
   	scanf("%d",&quantity);
   	result= quantity*70;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	case 9:
   	printf("\n Enter the quantity for maaza:\n");
   	scanf("%d",&quantity);
   	result= quantity*20;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	default:
   	printf("\n Enter valid input\n");
     }
     
   printf("for further order enter 1 else 0\t:");
   scanf("%d",&food);
   
    
 }
  return 0;
}


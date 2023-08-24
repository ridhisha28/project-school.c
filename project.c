#include<stdio.h>
int main()
{
   int choice,quantity,result;
   
   printf("\n________________________________");
   printf("\n__________HOTEL____________");
   printf("\n________________________________");
   printf("\nMENU CARD:\n");
   printf("\nS.N.\tMENU\n");
   
   printf("\n\tBIRYANIS\n");
   	printf("\n1\tChicken biryani\t:372\n");
   	printf("\n2\tVeg biryani\t:250\n");
   	printf("\n3\tEgg biryani\t:300\n");
   	printf("\n4\tVeg biryani pack\t:383\n");
   	
   printf("\n\tSTARTERS\n");
   	printf("\n5\tChilli chicken\t:264\n");
   	printf("\n6\tpaneer\t:186\n");

   printf("\n\tCOLD DRINKS\n");
   	printf("\n7\tChocolate milkshake\t:100\n");
   	printf("\n8\tCoffee\t:70\n");
   	printf("\n9\tmaaza\t:20\n");
   	
   
   printf("\nWhich food you want\n");
   scanf("%d",&choice);
   
   switch(choice)
   {
   	case 1:
   	printf("\n Enter the quantity for chicken biryani:\n");
   	scanf("%d",&quantity);
   	result= quantity*372;
   	printf("\n total cost \t:%d\n",result);
   	
   	printf("\n Enter the quantity for veg biryani:\n");
   	scanf("%d",&quantity);
   	result= quantity*250;
   	printf("\n total cost \t:%d\n",result);
   	
   	printf("\n Enter the quantity for egg biryani:\n");
   	scanf("%d",&quantity);
   	result= quantity*300;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	case 2:
   	printf("\n Enter the quantity:\n");
   	scanf("%d",&quantity);
   	result= quantity*372;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	case 3:
   	printf("\n Enter the quantity:\n");
   	scanf("%d",&quantity);
   	result= quantity*372;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	case 4:
   	printf("\n Enter the quantity:\n");
   	scanf("%d",&quantity);
   	result= quantity*372;
   	printf("\n total cost \t:%d\n",result);
   	break;
   	
   	default:
   	printf("\n Enter valid input\n");
   }
     return 0;
}


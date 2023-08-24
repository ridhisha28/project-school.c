#include<stdio.h>
int main()
{
   int choice,quantity,result,iphone,sold, total_iphone, mob_no, product=1;
   char name, pay;
   printf("\n\t_________________________________________________________________________\t");
   printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ELECTRONICS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t");
      printf("\n\t~~~~~~~~~~~~~~~~~~Welcome to electronics store~~~~~~~~~~~~~~~~~~~~~~~~\t");
   printf("\n\t_________________________________________________________________________\t");
   printf("\n\t|\t\t\tELECTRONIC ITEMS\t\t\t|\n");
   printf("\n\t|\tS.N.\tPRODUCT NO.\t PRODUCT NAME\t\tPRICE\t\t|\n");
        printf("\n\t|\t1\t094\t\tI-phone13\t\t:60,900\t\t|\n");
   	printf("\n\t|\t2\t343\t\tTV\t\t\t:25,000\t\t|\n");
   	printf("\n\t|\t3\t478\t\tWASHING MASHINE\t\t:45,000\t\t|\n");
   	printf("\n\t|\t4\t232\t\tLAPTOP\t\t\t:60,000\t\t|\n");
        printf("\n\t|\t5\t887\t\tHEATER\t\t\t:25,000\t\t|\n");
   	printf("\n\t|\t6\t143\t\tREFRIDGERATOR\t\t:21,000\t\t|\n");
        printf("\n\t|\t7\t325\t\tOVEN\t\t\t:15,000\t\t|\n");
   	printf("\n\t|\t8\t121\t\tMIXING GRAINDER\t\t:7,000\t\t|\n");
   	printf("\n\t|\t9\t234\t\tAIR CONDITIONER\t\t:45,000\t\t|\n");
   	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   
   
   for( ;product==0; )
   {
   printf("\n_____________________________________________________________");
   printf("\n_______________Which product you want to buy?________________");
   scanf("%d",&choice);
   
   switch(choice){
   	case 1:
   	printf("\n How many I-phone's were sold today:\n");
   	scanf("%d",&iphone);
   	total_iphone= iphone*60,900;
   	printf("\n total cost \t:%d\n",total_iphone);
   	
   	break;
   	
   	case 2:
   	printf("\n How many TV's were sold today:\n");
   	scanf("%d",&sold);
   	iphone= sold*25,000;
   	printf("\n total cost \t:%d\n",iphone);
   	break;
   	
   	case 3:
   	printf("\n How many I-phone's were sold today:\n");
   	scanf("%d",&sold);
   	iphone= sold*60,900;
   	printf("\n total cost \t:%d\n",iphone);
   	break;
   	
   	case 4:
   	printf("\n How many I-phone's were sold today:\n");
   	scanf("%d",&sold);
   	iphone= sold*60,900;
   	printf("\n total cost \t:%d\n",iphone);
   	break;
   	
   	case 5:
   	printf("\n How many I-phone's were sold today:\n");
   	scanf("%d",&sold);
   	iphone= sold*60,900;
   	printf("\n total cost \t:%d\n",iphone);
   	break;
   	
   	case 6:
   	printf("\n How many I-phone's were sold today:\n");
   	scanf("%d",&sold);
   	iphone= sold*60,900;
   	printf("\n total cost \t:%d\n",iphone);
   	break;
   	
   	case 7:
   	printf("\n How many I-phone's were sold today:\n");
   	scanf("%d",&sold);
   	iphone= sold*60,900;
   	printf("\n total cost \t:%d\n",iphone);
   	break;
   	
   	case 8:
   	printf("\n How many I-phone's were sold today:\n");
   	scanf("%d",&sold);
   	iphone= sold*60,900;
   	printf("\n total cost \t:%d\n",iphone);
   	break;
   	
   	case 9:
   	printf("\n How many I-phone's were sold today:\n");
   	scanf("%d",&sold);
   	iphone= sold*60,900;
   	printf("\n total cost \t:%d\n",iphone);
   	break;
   	
   	default:
   	printf("\n\t\tEnter valid input\n");
     }
     printf("\nfor further booking enter 1 else enter 0");
     scanf("%d",&product);
  }


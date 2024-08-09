//  Create menu driven calculater using function ?


#include<stdio.h>
int main()
{
	int calculater,Substraction=0,Addition=0,Multiplication=0,Division=1,i;
	int num1,num2;
	float n1,n2;
	
	char yes;
	yes = 'Y';
	while(yes == 'Y')
	{ 
	again :	
	printf("\n---MENU---");
	printf("\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	
	printf("\n\nEnter your choice : ");
	scanf("%d",&calculater);
	
	switch(calculater)
	{
		case 1 :
			printf("\nEnter the fisrt numbers : ");
			scanf("%d",&num1);
			
			printf("Enter the second numbers : ");
			scanf("%d",&num2);
			
			Addition = num1+num2 ;
			printf("\nAddition = %d\n",Addition);
			
		break ;
		
		case 2 :
			printf("\nEnter the fisrt numbers : ");
			scanf("%d",&num1);
			
			printf("Enter the second numbers : ");
			scanf("%d",&num2);
			
			Substraction = num1-num2 ;
			printf("\nSubstraction = %d\n",Substraction);
			
		break ;	
			
		case 3 :
			printf("\nEnter the fisrt numbers : ");
			scanf("%d",&num1);
			
			printf("Enter the second numbers : ");
			scanf("%d",&num2);
			
			Multiplication = num1*num2 ;
			printf("\nMultiplication = %d\n",Multiplication);
		
		break ;	
		
		case 4 :
			printf("\nEnter the fisrt numbers : ");
			scanf("%d",&num1);
			
			printf("Enter the second numbers : ");
			scanf("%d",&num2);
			
			Division = num1/num2 ;
			printf("\nDivison = %d\n",Division);
		
		break ;	
			
	default :
	    printf("INVALID VALUE ");		
	}
	
	    printf("\nDo you like to continue 'Y' or not 'N' :");
	    
	    if(yes=='Y' && yes !='N') 
	    {
	    	scanf(" %c",&yes);
		}
	
	}
	
	return 0;
		 
}

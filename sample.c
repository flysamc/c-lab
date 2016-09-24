#include <stdio.h>
/*simple menu based program to print the sum,difference, product and quotient of two integers*/

/* Function prototype declaration*/
/* return_type function_name (parameter declarations, if any); */

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
float division(int, int);

/*Main function starts*/

int main()
{
	int num1,num2, choice;
	do
	{
		printf("\n\t\t Main menu \n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n Enter your choice\t");
		scanf("%d",&choice);
		switch(choice){
			case (1): printf ("\nEnter two integers\n");
			scanf("%d%d",&num1,&num2);
			printf("The sum is: %d",addition(num1,num2));
			break; 
			case (2): printf ("\nEnter two integers\n");
			scanf("%d%d",&num1,&num2);
			printf("The difference is: %d",subtraction(num1,num2));
			break; 
			case (3): printf ("\nEnter two integers\n");
			scanf("%d%d",&num1,&num2);
			printf("The product is: %d",multiplication(num1,num2));
			break; 
			case (4): printf ("\nEnter two integers\n");
			scanf("%d%d",&num1,&num2);
			printf("The quotient is: %f",division(num1,num2));
			break; 
			case (5): printf("\nProgram terminated.\n");
        		break;
			default: printf("\nWrong Input");
			break;
		}
	}while(choice!=5);
printf("Bye\n");
return 0;
}

/* Function declarations*/
int addition(int a,int b)
{
	return(a+b);
}
int subtraction (int a, int b)
{
	return(a-b);
}
int multiplication(int a, int b)
{
	return(a*b);
}
float division(int a, int b)
{
	return(a/(float)b);
}


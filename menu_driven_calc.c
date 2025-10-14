#include <stdio.h>

int factorial(int number)
{
	int factorial= 1, og = number;;
	for (int count= 1;count<=og;count++)
	{
		factroial*= number;
		number--;
	}
	return factorial;
}

int prime(int number)
{
	for (int divisor = 2; divisor < number;divisor++)
	{
		if ( number % divisor==0)
		{
			return 0;
		}
	}
	return 1 ;
}

int even(int number)
{
	if ( number %2 == 0)
	{
		return 1;
	}
	else
		return 0;
}

int odd(int number)
{
	if ( number % 2 != 0)
	{
		return 1;
	}
	else
		return 0 ;
}

int main(){
	int input_number;
	char operation[20];
	printf("Type the operation name ( factorial , check prime, odd/even ): ");
	scanf("%s" , operation);
	printf("%s" , operation);
	
	return 0;
	} 
	
	
	
	
	
	
	
	
	
	
	
	
	
	

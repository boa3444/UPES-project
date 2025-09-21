#include <stdio.h>

int factorial(int x )
{
	int fact = 1, og= x;
	for ( int i = 0 ; i < og ; i++)
	{
		fact *= x;
		x--;
	}
	return fact;
	
}
		 

int main(){
	int input = 0, digit = 0 , sum = 0;
	scanf("%d" , &input);
	int vessel = input ;
	int tumbler = input;
	while ( vessel != 0)
	{
		vessel /= 10;
		digit++;
		
	}
	
	for ( int i = 0 ; i < digit ; i++)
	{
		int l_dig = input % 10 ;
		sum += factorial(l_dig);
		//printf("%d\n" , factorial(l_dig));
		input /= 10;
	}
	//printf("%d" , sum);
	if ( sum == tumbler ) 
		printf("Strong number\n");
	else 
		printf("Not a strong number\n");
		
	//printf("%d" , factorial(5));
	return 0 ;
}

#include <stdio.h>

long long int power(int x , int y )
{	
	long long int number = 1;
	while ( y>0)
	{
		number *= x;
		y--;
	}
	return number;
	}
		
int main(){
	long long int number;
	int digit = 0;
	scanf("%lld" , &number);
	int vessel=number;
	while ( vessel != 0)
	{
		vessel/=10;
		digit++;
		}
	if ( digit < 3)
	{
		printf("PLease input  NUMBER WITH ATLEAST 3 DIGITS");
		return 0 ;
	}
	int l_dig = number % 10;
	number/=10;
	int rest = number % power(10, digit-2);
	number/= power(10 , digit -2);
	int final_number =( l_dig * power(10 , digit -2) ) + rest;
	printf("%lld" , (final_number * 10 ) + number);
	
	
	return 0 ;
	}

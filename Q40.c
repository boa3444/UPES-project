#include <stdio.h>

int main(){
	int input = 0, binary= 0 , l_digit  = 0 ;
	int resum = 0, r_digit = 0, digit = 0;
	
	scanf("%d" , &input);
	int  og= input;
	
	while (input != 0)
	{
		input /= 10;
		digit += 1;
	}
	
	if (digit != 4)
	{
		printf("Please input a 4 digit binary number only");
		return 0 ;
		}
	
	for (int i = 0 ; i < digit; i++)
	{
		l_digit = og % 10;
		if ( l_digit == 1)
			l_digit = 0;
		else 
			l_digit = 1;
		binary = (binary * 10) + l_digit;
		og /= 10;
	}
	printf("Complement:%d" ,binary);
	return 0 ;
	}

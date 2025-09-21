#include <stdio.h>

int main(){
	int input  = 0 , sum = 0;
	scanf("%d" , &input);
	for ( int i = 1 ; i < input ; i++)
	{
		if ( input % i == 0 )
		{
			sum+= i;
		}
	}
	if ( sum == input ) 
		printf("Perfect Number!");
	else 
		printf("Not a perfect number");
		
	return 0 ;
	}

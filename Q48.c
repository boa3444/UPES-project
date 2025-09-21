#include <stdio.h>

int main(){
	int to_print = 1;
	int number = 1;
	for ( int row = 1 ; row <=5 ; row++)
	{
		for ( int count = 0 ; count < number ; count++)
		{
			printf("%d" , to_print);
			to_print++;
		
		}
		
		number += 1;
		printf("\n");
		to_print = 1;
	}
	return 0 ;
	}

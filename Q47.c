#include <stdio.h>

int main(){
	char star = '*';
	int number = 1;
	for ( int row = 1 ; row <=5 ; row++)
	{
		for ( int count = 0 ; count < number ; count++)
		{
			printf("%c" , star);
		
		}
		
		number += 1;
		printf("\n");
	}
	return 0 ;
	}

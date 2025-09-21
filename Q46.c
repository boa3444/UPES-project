#include <stdio.h>

int main(){
	char star = '*';
	for ( int row = 0 ; row < 5 ; row++)
	{
		for ( int count = 0 ; count < 5 ; count++)
		{
			printf("%c" , star);
			
		}
		printf("\n");
	}
	return 0 ;
	}

#include <stdio.h>

int main(){
	int to_print = 1 ; 
	int limit= 5;
	for ( int row = 0 ; row < 5 ; row++)
	{
		for ( int count = 0 ;  count< 5; count++)
		{
			
			if ( to_print >= limit)
			{
				printf("%d" , to_print);
			}
			to_print++;
		}
		
		limit--;
		printf("\n");
		to_print = 1;
	}
	return 0 ;
	
	}

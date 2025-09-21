#include <stdio.h>

int main(){
	int dont_here = 0 ;
	for ( int row = 0 ; row < 5 ; row++)
	{
		for ( int count = 1; count <= 5; count++)
		{
			if ( count > dont_here)
			{
				printf("%c" , '*');
			}
			else
				printf(" ");
		}
		printf("\n");
		dont_here++;
	}
	return 0 ;
	}

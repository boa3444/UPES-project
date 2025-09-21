#include <stdio.h>

int main(){
	float sum = 1;
	int input ;
	float number = 3;
	scanf("%d" , &input);
	for ( int i = 1 ; i< input ; i++)
	{
		sum += number/(number+1);
		number += 2;
	}
	
	printf("%g" , sum);
	return 0 ;
	}

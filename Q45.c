#include <stdio.h>

int main(){
	float number = 0 ;
	int input ;
	float sum = 0 ;
	float divisor = -1;
	scanf("%d" , &input);
	for ( int i = 0 ; i< input; i++)
	{
		number += 2;
		divisor += 4;
		sum += number/divisor ;
	}
	
	printf("%g" , sum);
	return 0 ;
	}

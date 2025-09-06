#include <stdio.h>

int main(){
	int input = 0, units= 1, bill= 0; 
	scanf("%d", &input);
	while (units<= input)
	{
		if (units<=100)
		
			bill +=5;
			
		else if (units>100 && units <= 200)
		
			bill +=7;
			
		else if (units>200 && units <=300)
		
			bill += 10;
			
			
		else
			bill += 12;
			
	units += 1;
	}
	
	printf("Bill: $%d", bill);
	return 0 ;
	}
			
	

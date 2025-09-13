#include <stdio.h>

int main(){
	int input = 0;
	scanf("%d", &input);
	printf("Its Factor: ");
	if ( input == 0)
	printf("0\n");
	else
	for ( int i = 1 ; i <= input ; i++){
		if ( input % i == 0) {
			printf("%d  " , i);
			}
			
	}
	return 0;
	}

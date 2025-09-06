#include <stdio.h>

int main(){
	int num1 = 0 , num2 = 0;
	char oper;
	scanf("%d %d %c", &num1 ,&num2,&oper);
	switch (oper){
	case '+':
	printf("%d", num1 + num2);
	break;
	case '/':
	printf("%d", num1 / num2);
	break;
	case '*':
	printf("%d", num1 * num2);
	break;
	case '-':
	printf("%d", num1 - num2);
	break;
	case '%':
	printf("%d", num1 % num2);
	break;
	}

	return 0 ;
	
	} 

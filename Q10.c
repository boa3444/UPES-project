#include <stdio.h>

int main(){
	int input= 0, hour = 0, min = 0, sec = 0;
	scanf("%d", &input);
	
	hour = input / 3600;
	min = (60%input ) 60;
	sec = input % 60;
	
	printf("%d:%d:%d", hour, min ,sec);
	
	
	return 0 ;
	
	}

#include <stdio.h>

int main(){
	int input=0,day=1, fine =0, membership = 1;
	scanf("%d", &input);
	while (day<=input){
		if (day<=5){
			fine+=2;
			}
		else if (day > 5 && day<=10){
			fine+=4;
			}
		else if (day > 10 && day <= 30){
			fine+=6;
			}
		else{
			membership = 0;
			}
		day+=1;
		
		}
	if (membership)
		printf("Fine:%d\n" , fine);
	else
		printf("Goodbye since your membership is cancelled\n");
	return 0;
	}
			
			

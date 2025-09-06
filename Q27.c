#include <stdio.h>

int main(){
	int input = 0, sum = 0, num = 1, flag = 1;
	scanf("%d", &input);
	while (flag <= input){
		sum += num;
		num += 2;
		
		flag +=1 ;
		}
		
	printf("%d", sum);
	return 0 ;
	}

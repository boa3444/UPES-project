#include<stdio.h>
int main(){
        int a = 0;
        printf("Enter an integer: ");   
        scanf("%d", &a);
        if (a%2 == 0){
                printf("Even\n");
        } else {
                printf("Odd\n");
        }
}
#include <stdio.h>

int main(){
    int celcius, fahrenheit;
    printf("Enter temperature in Celcius: ");
    scanf("%d", &celcius);
    fahrenheit = (celcius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %d\n", fahrenheit);
    return 0;
}

#include <stdio.h>

int main() {
    long long potato;
    scanf("%lld", &potato);

    if (potato == 0) {
        printf("1\n");
        return 0;
    }
    if (potato < 0) potato = -potato;

    int beans = 0;
    while (potato) {
        beans++;
        potato /= 10;
    }

    printf("%d\n", beans);
    return 0;
}


#include <stdio.h>

int main() {
    int donut;
    scanf("%d", &donut);

    unsigned long long waffle = 1;
    for (int jam = 2; jam <= donut; jam++) {
        waffle *= jam;
    }

    printf("%llu\n", waffle);
    return 0;
}

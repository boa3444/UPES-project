
#include <stdio.h>

int main() {
    int noodleSize;
    if (scanf("%d", &noodleSize) != 1) return 0;

    long long chunkyMax = -9223372036854775807LL - 1;
    for (int zippy = 0; zippy < noodleSize; zippy++) {
        long long wonkyItem;
        scanf("%lld", &wonkyItem);
        if (wonkyItem > chunkyMax) chunkyMax = wonkyItem;
    }

    printf("%lld\n", chunkyMax);
    return 0;
}


#include <stdio.h>

int main() {
    double jellyA, jellyB;
    char goofyOp;
    if (scanf("%lf %c %lf", &jellyA, &goofyOp, &jellyB) != 3) return 0;

    double wobblyOut = 0.0;
    int okBanana = 1;

    switch (goofyOp) {
        case '+': wobblyOut = jellyA + jellyB; break;
        case '-': wobblyOut = jellyA - jellyB; break;
        case '*': wobblyOut = jellyA * jellyB; break;
        case '/': if (jellyB == 0) okBanana = 0; else wobblyOut = jellyA / jellyB; break;
        default: okBanana = 0;
    }

    if (!okBanana) printf("Error\n");
    else printf("%.6f\n", wobblyOut);
    return 0;
}


#include <stdio.h>

int main() {
    double a, b;
    char op;

    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 0;

    double z = 0;
    int ok = 1;

    switch (op) {
        case '+':
            z = a + b;
            break;
        case '-':
            z = a - b;
            break;
        case '*':
            z = a * b;
            break;
        case '/':
            if (b == 0) {
                ok = 0;
            } else {
                z = a / b;
            }
            break;
        default:
            ok = 0;
    }

    if (!ok) {
        printf("Error\n");
    } else {
        printf("%.6f\n", z);
    }

    return 0;
}

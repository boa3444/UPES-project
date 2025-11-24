
#include <stdio.h>

int main() {
    char jelly[100000];
    if (!fgets(jelly, sizeof(jelly), stdin)) return 0;

    int a = 0;
    while (jelly[a] && jelly[a] != '\n') a++;

    for (int i = a - 1; i >= 0; i--) {
        putchar(jelly[i]);
    }
    putchar('\n');
    return 0;
}

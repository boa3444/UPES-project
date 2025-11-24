
#include <stdio.h>

int main() {
    char wiggle[100000];
    if (!fgets(wiggle, sizeof(wiggle), stdin)) return 0;

    int mush = 0;
    while (wiggle[mush] && wiggle[mush] != '\n') mush++;

    printf("%d\n", mush);
    return 0;
}

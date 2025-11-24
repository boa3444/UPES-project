
#include <stdio.h>
#include <ctype.h>

int main() {
    char sugar[100000];
    if (!fgets(sugar, sizeof(sugar), stdin)) return 0;

    int v = 0;
    int c = 0;
    for (int i = 0; sugar[i]; i++) {
        char x = tolower((unsigned char)sugar[i]);
        if (x >= 'a' && x <= 'z') {
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
                v++;
            } else {
                c++;
            }
        }
    }

    printf("%d %d\n", v, c);
    return 0;
}

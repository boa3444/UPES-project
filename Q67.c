
#include <stdio.h>

int main() {
    int goblins;
    scanf("%d", &goblins);

    long long pixies[100000];
    for (int fairy = 0; fairy < goblins; fairy++) {
        scanf("%lld", &pixies[fairy]);
    }

    long long unicorn;
    scanf("%lld", &unicorn);

    int found = -1;
    for (int fairy = 0; fairy < goblins; fairy++) {
        if (pixies[fairy] == unicorn) {
            found = fairy;
            break;
        }
    }

    printf("%d\n", found);
    return 0;
}

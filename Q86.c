
#include <stdio.h>

int main() {
    char apple[100005];
    char mango[100005];

    if (!fgets(apple, sizeof(apple), stdin)) return 0;
    if (!fgets(mango, sizeof(mango), stdin)) return 0;

    int i = 0;
    while (apple[i] && apple[i] != '\n') i++;
    apple[i] = '\0';

    i = 0;
    while (mango[i] && mango[i] != '\n') i++;
    mango[i] = '\0';

    i = 0;
    while (apple[i] && mango[i] && apple[i] == mango[i]) i++;

    int res = (unsigned char)apple[i] - (unsigned char)mango[i];
    if (res < 0) printf("-1\n");
    else if (res > 0) printf("1\n");
    else printf("0\n");

    return 0;
}

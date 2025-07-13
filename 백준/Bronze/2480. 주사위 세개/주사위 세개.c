#include <stdio.h>

int main() {
    int a, b, c;
    int reward;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        reward = 10000 + a * 1000;
    } else if (a == b || a == c) {
        reward = 1000 + a * 100;
    } else if (b == c) {
        reward = 1000 + b * 100;
    } else {
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        reward = max * 100;
    }

    printf("%d\n", reward);
    return 0;
}

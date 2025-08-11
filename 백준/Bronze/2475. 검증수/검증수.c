#include <stdio.h>

int main(void) {
    int a, b, c, d, e;
    if (scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) != 5) return 0;
    int sum = a*a + b*b + c*c + d*d + e*e;
    printf("%d\n", sum % 10);
    return 0;
}

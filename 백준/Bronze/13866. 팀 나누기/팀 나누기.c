#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int A, B, C, D;
    if (scanf("%d %d %d %d", &A, &B, &C, &D) != 4) return 0;

    int s1 = abs((A + B) - (C + D));
    int s2 = abs((A + C) - (B + D));
    int s3 = abs((A + D) - (B + C));

    int ans = s1;
    if (s2 < ans) ans = s2;
    if (s3 < ans) ans = s3;

    printf("%d\n", ans);
    return 0;
}

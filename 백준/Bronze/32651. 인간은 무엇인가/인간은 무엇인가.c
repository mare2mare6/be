#include <stdio.h>

int main(void) {
    long long N;
    if (scanf("%lld", &N) != 1) return 0;
    if (N % 2024 == 0 && N <= 100000) printf("Yes\n");
    else printf("No\n");
    return 0;
}

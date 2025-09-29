#include <stdio.h>

int main(void) {
    int A, B, C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    int total = A * 60 + B + C;
    int hour = (total / 60) % 24;
    int minute = total % 60;

    printf("%d %d\n", hour, minute);
    return 0;
}

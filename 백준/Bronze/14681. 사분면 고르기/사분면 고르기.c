#include <stdio.h>

int main() {
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);

    if (A > 0 && B > 0) {
        printf("1\n");
    } else if (A < 0 && B > 0) {
        printf("2\n");
    } else if (A < 0 && B < 0) {
        printf("3\n");
    } else if (A > 0 && B < 0) {
        printf("4\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int A;

    scanf("%d", &A);

    if (A >= 90 && A <= 100) {
        printf("A\n");
    } else if (A >= 80 && A <= 89) {
        printf("B\n");
    } else if (A >= 70 && A <= 79) {
        printf("C\n");
    } else if (A >= 60 && A <= 69) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}

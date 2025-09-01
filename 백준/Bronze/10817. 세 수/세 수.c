#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int temp;
    if (A > B) { temp = A; A = B; B = temp; }
    if (B > C) { temp = B; B = C; C = temp; }
    if (A > B) { temp = A; A = B; B = temp; }

    printf("%d\n", B); // 중간값 출력
    return 0;
}

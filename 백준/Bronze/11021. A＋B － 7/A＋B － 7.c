#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);  // 테스트 케이스 개수 입력
    
    for (int i = 1; i <= T; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i, A + B);
    }
    return 0;
}

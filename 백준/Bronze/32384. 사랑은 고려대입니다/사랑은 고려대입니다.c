#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("LoveisKoreaUniversity");
        if (i != N - 1) printf(" "); // 마지막엔 공백 X
    }
    return 0;
}

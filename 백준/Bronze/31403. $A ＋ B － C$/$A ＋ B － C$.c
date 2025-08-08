#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    char sa[10], sb[10], sc[10];
    char concat[20];

    // 입력 (정수 + 문자열 둘 다 저장)
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    sprintf(sa, "%d", a); // 정수를 문자열로 변환
    sprintf(sb, "%d", b);
    sprintf(sc, "%d", c);

    // 1) 숫자 계산
    printf("%d\n", a + b - c);

    // 2) 문자열 이어붙이기
    strcpy(concat, sa);      // sa 복사
    strcat(concat, sb);      // sb 이어붙이기

    // 문자열을 숫자로 변환 후 빼기
    int result = atoi(concat) - atoi(sc);
    printf("%d\n", result);

    return 0;
}

#include <stdio.h>

int main(void) {
    char ch;
    if (scanf(" %c", &ch) != 1) return 0;

    if (ch == 'N' || ch == 'n') {
        printf("Naver D2");
    } else {
        printf("Naver Whale");
    }
    return 0;
}

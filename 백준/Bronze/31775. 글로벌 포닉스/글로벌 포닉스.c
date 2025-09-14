#include <stdio.h>
#include <string.h>

int main(void) {
    char s[3][25];
    for (int i = 0; i < 3; ++i) {
        if (scanf("%24s", s[i]) != 1) return 0;
    }

    int has_l = 0, has_k = 0, has_p = 0;
    for (int i = 0; i < 3; ++i) {
        if (strlen(s[i]) == 0) continue;
        char c = s[i][0];
        if (c == 'l') has_l = 1;
        else if (c == 'k') has_k = 1;
        else if (c == 'p') has_p = 1;
    }

    if (has_l && has_k && has_p) printf("GLOBAL\n");
    else printf("PONIX\n");

    return 0;
}

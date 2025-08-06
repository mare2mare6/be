#include <stdio.h>

int main(void) {
    int N, v;
    int count = 0;
    int arr[100];
    
    scanf("%d", &N); 

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    scanf("%d", &v); 

    for (int i = 0; i < N; i++) {
        if (arr[i] == v) {
            count++; // 찾은 정수와 같으면 count 증가
        }
    }

    printf("%d\n", count);

    return 0;
}

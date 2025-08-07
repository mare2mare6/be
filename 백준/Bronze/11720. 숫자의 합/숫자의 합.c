#include <stdio.h>

int main() {
    int N;  
    char num[101];
    int sum = 0; 

    scanf("%d", &N);    
    scanf("%s", num); 
    
    for (int i = 0; i < N; i++) {
        sum += num[i] - '0'; 
    }

    printf("%d\n", sum); 

    return 0;
}

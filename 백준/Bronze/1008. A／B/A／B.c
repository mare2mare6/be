#include <stdio.h> 

int main() {
    int A, B;

    scanf("%d %d", &A, &B);  
    printf("%.15f\n", (double)A / B);  // double 형변환 후 출력 (소수점 6자리)
    
    return 0;
}

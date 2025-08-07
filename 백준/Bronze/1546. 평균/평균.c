#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double scores[1000];  // 최대 1000개
    double max = 0.0;
    double sum = 0.0;

    for (int i = 0; i < N; i++) {
        scanf("%lf", &scores[i]);
        if (scores[i] > max) {
            max = scores[i];
        }
    }

    for (int i = 0; i < N; i++) {
        scores[i] = scores[i] / max * 100.0;
        sum += scores[i];
    }

    printf("%lf\n", sum / N);

    return 0;
}

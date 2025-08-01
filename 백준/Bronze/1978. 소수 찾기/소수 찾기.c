#include <stdio.h>

int is_prime_number(int number) {
	if (number <= 1) {
		return 0;
	}
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {
	int N;
	int count = 0;
	int num;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (is_prime_number(num)) {
			count++; 
		}
	}

	printf("%d\n", count); 

	return 0;
}

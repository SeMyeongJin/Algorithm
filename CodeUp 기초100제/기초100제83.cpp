#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		if (i == 3 || i == 6 || i == 9) {
			printf("X ");
			continue;
		}
		printf("%d ", i);
	}
}
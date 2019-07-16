#include <stdio.h>
int main(void) {
	int a, b = 0, sum = 0;
	scanf("%d", &a);
	while(sum < a) {
		b++;
		sum += b;
	}
	printf("%d", b);
}

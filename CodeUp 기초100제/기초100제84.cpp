#include<stdio.h>

int main() {
	int i, j, k;
	scanf("%d %d %d", &i, &j, &k);

	for (int a = 0; a<i; a++)
		for (int b = 0; b<j; b++)
			for (int c = 0; c<k; c++)
				printf("%d %d %d\n", a, b, c);

	printf("%d", i*j*k);
}
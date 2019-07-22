#include<stdio.h>

int main() {
	int a, m, d, n;
	scanf("%d %d %d %d", &a, &m, &d, &n);

	for (int i = 0; i < n - 1; i++)
	{
		a = a * m + d;
	}

	printf("%d", a);
}
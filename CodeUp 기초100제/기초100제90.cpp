#include<stdio.h>

int main() {
	int a, r, n, temp;
	scanf("%d %d %d", &a, &r, &n);

	temp = r;
	n -= 1;
	r = 1;

	while (n-- > 0)
	{
		r *= temp;
	}

	printf("%d", a*r);
}

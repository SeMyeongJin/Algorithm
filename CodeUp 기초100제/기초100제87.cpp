#include<stdio.h>

int main() {
	int a, sum = 0;
	scanf("%d", &a);

	for (int i = 1; ; i++)
	{
		if (sum > a) break;
		sum += i;
	}
	printf("%d", sum);
}
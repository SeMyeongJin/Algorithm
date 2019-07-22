#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, a, b, arr[20][20] = { 0, };
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		arr[b][a] = 1;
	}

	for (int i = 1; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
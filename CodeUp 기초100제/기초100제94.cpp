#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	scanf("%d", &n);

	int * array = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	for (int j = n - 1; j >= 0; j--)
	{
		printf("%d ", array[j]);
	}
}
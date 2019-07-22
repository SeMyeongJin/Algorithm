#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, min;
	scanf("%d", &n);

	int * array = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	min = array[0];

	for (int i = 0; i < n; i++)
	{
		if (min > array[i])
			min = array[i];
	}

	printf("%d", min);
}
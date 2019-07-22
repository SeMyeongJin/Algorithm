#include<stdio.h>

int main() {
	int n, temp, arr[24] = { 0, };
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		arr[temp]++;
	}

	for (int i = 1; i < 24; i++)
	{
		printf("%d ", arr[i]);
	}
}
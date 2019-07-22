#include<stdio.h>

int main() {
	int w, h, b;
	scanf("%d %d %d", &w, &h, &b);

	double ret = w * h * b / 8;
	ret = ret / 1024;
	ret = ret / 1024;
	printf("%.2f MB", ret);
}
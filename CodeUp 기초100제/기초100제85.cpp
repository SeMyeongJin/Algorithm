#include<stdio.h>

int main() {
	int h, b, c, s;
	scanf("%d %d %d %d", &h, &b, &c, &s);

	double ret = h * b * c * s / 8;
	ret = ret / 1024;
	ret = ret / 1024;
	printf("%.1f MB", ret);
}
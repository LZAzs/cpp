#include <algorithm>
#include<stdio.h>
#include<iostream>
int a[10],zh;
double pjz;
int main()
{
	for (int i = 0; i < 10; i++) {
		std::cin >> a[i];
		zh += a[i];
	}
	std::sort(a, a + 9);
	pjz = zh / 10;
	printf("%d %.1f %d %d", zh, pjz, a[0], a[9]);
	return 0;
}
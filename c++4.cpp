#include<iostream>
int sum;
int main()
{
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	std::cout << sum << std::endl;
	return 0;
}
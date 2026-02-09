#include<iostream>
int n;
bool prime(int a) {
	if (a == 0) {
		return false;
	}
	for (int i = 2; i < sqrt(a); i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	std::cin >> n;
	std::cout << prime(n) << std::endl;
	return 0;
}

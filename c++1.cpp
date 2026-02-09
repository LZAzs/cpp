#include<iostream>
int a;
int main()
{
	std::cin >> a;
	if (a > 0) {
		std::cout << "正数" << std::endl;
	}else if(a < 0) {
		std::cout << "负数" << std::endl;
	}
	else {
		std::cout << "0" << std::endl;
	}
	return 0;
}



#include <iostream>
#include <cstring>
#include <bitset>
#include <cmath>
#include <iomanip>

int main() 
{
	double	res;

	res = 1 + pow(2, -23);
	std::cout << std::fixed;
	std::cout.precision(23);
	std::cout << std::setw(30) << "1 + 2^-23: " << res << std::endl;
	res = 1 + pow(2, -23) + pow(2, -22);
	std::cout << std::setw(30) << "1 + 2^-23 + 2^-22: "<< res << std::endl;
	res = 0 + pow(2, -23);
	std::cout << std::setw(30) << "0 + 2^-23: " << res << std::endl;
	res = 0 + pow(2, -23) + pow(2, -22);
	std::cout << std::setw(30) << "0 + 2^-23 + 2^-22: "<< res << std::endl;

	double	temp;

	res = 1 + pow(2, -22);
	std::cout << std::setw(30) << "normal number: " << res << std::endl;
	res = 0 + pow(2, -22);
	std::cout << std::setw(30) << "denormal number: " << res << std::endl;

	// 이걸 보고 싶었던 것이 아니라, 정규화 식과 비정규화 식의 최소 단위의 차를 보고 싶었던 건데.. 어떻게 하지?
	return (0);
}
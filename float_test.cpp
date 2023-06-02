#include <iostream>
#include <cstring>
#include <bitset>

int main() {
	float			num;

	memset(&num, 0, sizeof(num));

 // float의 비트 패턴을 어떻게 출력하는지 모르겠다.
	std::cout << num;
	return (0);
}
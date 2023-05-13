#include <iostream>
#include <string>

int main()
{
	std::string name = "12345";
	char letter = name[3];

	std::cout << "name is "<< name << std::endl;
	std::cout << "letter is "<< letter << std::endl;
	name[3] = '5';
	std::cout << "letter is "<< letter << std::endl;
	std::cout << "name is "<< name << std::endl;
	return (0);
}
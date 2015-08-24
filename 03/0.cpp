#include <iostream>

int main() {
	bool isAlpha;
	isAlpha = false;
	if (!isAlpha) {
		std::cout << "isAlpha=" << isAlpha << std::endl;
		std::cout << std::boolalpha << "isAlpha=" << isAlpha << std::endl; 
	}
	std::cout << static_cast<double>(1) / 2 << std::endl;
	std::cout << 1 / 2 << std::endl; 
	
	return 0;
}

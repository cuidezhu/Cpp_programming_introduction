#include <iostream>
using namespace std;

int main() {
	string s1("Welcome to HTML");
	cout << s1.find("co") << endl;
	cout << s1.find("co", 6) << endl;
	cout << s1.find('o') << endl;
	cout << s1.find('o', 6) << endl;
	
	return 0;
}

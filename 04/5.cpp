#include <iostream>
using namespace std;

int main() {
	string s1("Welcome");
	cout << s1.at(3) << endl;
	cout << s1.erase(2, 3) << endl;
	s1.clear();
	cout << s1.empty() << endl;
	
	return 0;
}

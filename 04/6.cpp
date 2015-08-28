#include <iostream>
using namespace std;

int main() {
	string s1("Welcome");
	string s2("Welcomg");
	
	cout << s1.compare(s2) << endl;
	cout << s2.compare(s1) << endl;
	
	cout << s1.compare("Welcome") << endl;
	
	return 0;
}

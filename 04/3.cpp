#include <iostream>
using namespace std;

int main() {
	string s1("Welcome");
	s1.append(" to C++");		// appends " to C++" to s1
	cout << s1 << endl;			// s1 now becomes Welcome to C++ 
	
	string s2("Welcome");
	s2.append(" to C and C++", 3, 2);		// appends " C" to s2
	cout << s2 << endl;
	
	string s3("Welcome");
	s3.append(" to C and C++", 5);
	cout << s3 << endl;
	
	string s4("Welcome");
	s4.append(4, 'G');			// append "GGGG" to s4
	cout << s4 << endl;			// s4 now becomes WelcomeGGGG 
	
	return 0;
}

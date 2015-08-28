#include <iostream>
using namespace std;

int main() {
	string s1("Welcome");
	s1.assign("Dallas");				// assign "Dallas" to s1
	cout << s1 << endl;					// s1 now becomes Dallas
	
	string s2("Welcome");
	s2.assign("Dallas, Texas", 1, 3);	// assign "all" to s2
	cout << s2 << endl;					// s2 now becomes all
	
	string s3("Welcome");
	s3.assign("Dallas, Texas", 6);		// assign "Dallas" to s3
	cout << s3 << endl;					// s3 now becomes Dallas
	
	string s4("Welcome");
	s4.assign(4, 'G');					// assign "GGGG" to s4
	cout << s4 << endl;					// s4 now becomes GGGG
	
	return 0;
}

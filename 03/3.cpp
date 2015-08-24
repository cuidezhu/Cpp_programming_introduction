#include <iostream>
using namespace std;

int v1 = 10;
int main() {
	int v1 = 5;
	cout << "local variable v1 is " << v1 << endl;
	cout << "global variable v1 is " << ::v1 << endl;
	
	return 0;
}

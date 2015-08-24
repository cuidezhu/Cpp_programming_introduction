#include <iostream>
using namespace std;

int main() {
	int count = 1;
	int& refCount = count;
	refCount++;
	
	cout << "count is " << count << endl;
	cout << "refCount is " << refCount << endl;
	
	int clock = 10;
	refCount = clock;	// is the reference changed to clock?
	refCount++;
	
	cout << endl << "count is " << count << endl;
	cout << "refCount is " << refCount << endl;
	cout << "clock is " << clock << endl;
	
	return 0;
}

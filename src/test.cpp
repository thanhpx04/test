//============================================================================
// Name        : test.cpp
// Author      : Thanh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> myset;

	// set some initial values:
	for (int i=1; i<=2; ++i) myset.insert(i);

	cout << myset.size() << endl;

	myset.insert(1);
	cout << myset.size() << endl;
	return 0;
}

// October 13th 2019 //
// Day 6 of Writing Programs //
// Project #00008 | 'Factorial' //
// Language: C++ //
// Blessed Sid Build //

#include <iostream>
using namespace std;

int fact (int i) {
	int result = 1;
	while (i > 0) {
	result = result * i;
	i = i-1;

	}
	return(result);
}

int main() {
	int n;
	cout <<" Enter Your 'Natural' Number: ";
	cin >> n;
	while (n < 0) {
	cout << " ReEnter: ";
	cin >> n;
	}
cout << n << "! = " << fact(n) << endl;
return 0;

}

//---Respectfully---
//---Blessed Sid---//
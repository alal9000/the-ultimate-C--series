#include "Length.h"
#include "Point.h"
#include <iostream>
#include <compare>

using namespace std;


int main() {
	Length length{ 10 };
	cout << "Length: ";
	cin >> length;
	cout << length;


	return 0;

}
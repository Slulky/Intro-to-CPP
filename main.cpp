#include "functions.hpp"
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	double discrim = sqrt(b * b - 4 * a * c);

	cout << ((-b + discrim) / 2 * a * c) << endl;
	cout << ((-b - discrim) / 2 * a * c) << endl;

	return 0;
}
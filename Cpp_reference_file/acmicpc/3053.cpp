#include<iostream>
#include <cmath>
#define PI 3.1415926535897932
using namespace std;

int main(void) {
	int r;
	cin >> r;
	cout << fixed;
	cout.precision(6);
	double a = r * r * PI;
	double b = r * r * 2;
	cout << a << "\n" << b;
	return 0;
}
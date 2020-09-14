#include<iostream>
using namespace std;

int functionA(int N) {
	if (N == 1)
		return 1;
	else 
		return 2 * functionA(N - 1) + 1;
}

void functionB(int N, int a, int b, int c) {
	if (N == 1) {
		cout << a << " " << c << "\n";
	}
	else if (N == 2) {
		cout << a << " " << b << "\n";
		cout << a << " " << c << "\n";
		cout << b << " " << c << "\n";
	}
	else {
		functionB(N - 1, a, c, b);
		functionB(1, a, b, c);
		functionB(N - 1, b, a, c);
	}
}

int main(void) {
	int N, i, j;
	cin >> N;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cout << functionA(N) << "\n";
	functionB(N, 1, 2, 3);
	return 0;
}
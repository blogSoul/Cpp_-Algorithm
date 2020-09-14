#include<iostream>
using namespace std;

void function(int i, int j, int N) {
	if ((i / N) % 3 == 1 && (j / N) % 3 == 1) {
		cout << " ";
	}
	else {
		if (N / 3 == 0)
			cout << "*";
		else
			function(i, j, N / 3);
	}
}

int main(void) {
	int N, i, j;
	cin >> N;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			function(i, j, N);
		}
		cout << "\n";
	}
	return 0;
}
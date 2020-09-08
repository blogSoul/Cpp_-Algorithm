#include<iostream>
using namespace std;

int main(void) {
	int i, j, k, N;
	cin.tie(NULL); // cin을 cout으로부터 untie합니다. stream을 tie하면 다른 stream에서 입출력 요청이 오기전에 stream을 flush시킵니다
	ios::sync_with_stdio(false); // sync_with_stdio 함수는 cpp의 iostream을 c의 stdio.h와 동기화시켜주는 역할을 합니다.
	cin >> N;
	for (i = 0; i < 2 * N - 1; i++) {
		if (i < N) {
			for (j = 0; j < i; j = j + 1)
				cout << " ";
			for (j = 2 * N - 1 - 2 * i; j >= 1; j = j - 1)
				cout << "*";
			cout << "\n";
		}
		else {
			for (j = 2 * N  - 2 - i; j > 0; j = j - 1)
				cout << " ";
			for (j = 0; j < 2 * i -  2 * N + 3; j = j + 1)
				cout << "*";
			cout << "\n";
		}
		
	}
	return 0;
}
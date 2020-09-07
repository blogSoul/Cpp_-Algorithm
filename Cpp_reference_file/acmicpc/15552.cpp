#include<iostream>
using namespace std;

int main(void) {
	int x, y, i, T;
	cin.tie(NULL); // cin을 cout으로부터 untie합니다. stream을 tie하면 다른 stream에서 입출력 요청이 오기전에 stream을 flush시킵니다
	ios::sync_with_stdio(false); // sync_with_stdio 함수는 cpp의 iostream을 c의 stdio.h와 동기화시켜주는 역할을 합니다.
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> x >> y;
		cout << x + y << '\n';
	}
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

bool Count(int k) {
	int i, sum = 0;
	if (k < 2)
		return false;
	for (i = 2; i <= sqrt(k); i++) {
		if (k % i == 0)
			return false;
	}
	return true;
}

int Print(int start, int end) {
	int i, sum = 0, cnt = 0;
	for (i = start + 1; i <= end; i++) {
		if (Count(i) == true) {
			cnt += 1;
		}
	}
	return cnt;
}

int main(void) {
	int T , k;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	do{
		cin >> T;
		if (T == 0)
			break;
		cout << Print(T, 2*T) << "\n";
	} while (true);
	return 0;
}
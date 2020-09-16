#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int i, N, temp, arr[10001] = {0, };
	cin >> N;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	for (i = 0; i < N; i++) {
		cin >> temp;
		arr[temp]++;
	}
	for (i = 0; i < 10001; i++) {
		while (arr[i] > 0) {
			cout << i << "\n";
			arr[i]--;
		}
	}
	return 0;
}
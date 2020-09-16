#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int N, i, j;
	cin >> N;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int * arr1 = new int[N];
	int * arr2 = new int[N];
	int * rank = new int[N];
	for (i = 0; i < N; i++) {
		cin >> arr1[i] >> arr2[i];
		rank[i] = 1;
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (arr1[i] < arr1[j] && arr2[i] < arr2[j]) {
				rank[i] += 1;
			}
		}
	}
	for (i = 0; i < N; i++)
		cout << rank[i] << " ";
	return 0;
}
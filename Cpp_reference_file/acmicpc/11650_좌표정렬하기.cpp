/*
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(void) {
	int N, i, j, a, b, temp;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	int * arr1 = new int[N];
	int * arr2 = new int[N];
	for (i = 0; i < N; i++) {
		cin >> a >> b;
		arr1[i] = a;
		arr2[i] = b;
	}
	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if (arr1[i] > arr1[j]) {
				temp = arr1[j];
				arr1[j] = arr1[i];
				arr1[i] = temp;
				temp = arr2[j];
				arr2[j] = arr2[i];
				arr2[i] = temp;
			}
		}
	}
	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if (arr1[i] == arr1[j] && arr2[i] > arr2[j]) {
				temp = arr2[j];
				arr2[j] = arr2[i];
				arr2[i] = temp;
			}
		}
	}
	for (i = 0; i < N; i++)
		cout << arr1[i] << " " << arr2[i] << "\n";
	delete[] arr1;
	delete[] arr2;
	return 0;
}
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void) {
	int N, i, j, a, b, temp;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	vector<pair<int, int>> vec(N);
	for (i = 0; i < N; i++) 
		cin >> vec[i].first >> vec[i].second;
	sort(vec.begin(), vec.end());
	for (i = 0; i < N; i++)
		cout << vec[i].first << " " << vec[i].second << "\n";
	return 0;
}
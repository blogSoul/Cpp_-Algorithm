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
		cin >> vec[i].second >> vec[i].first;
	sort(vec.begin(), vec.end());
	for (i = 0; i < N; i++)
		cout << vec[i].second << " " << vec[i].first << "\n";
	return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(void) {
	int N, i, j, a, b, temp;
	string str;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	vector<pair<int, string>> vec(N);
	for (i = 0; i < N; i++) {
		cin >> str;
		vec[i].first = str.size();
		vec[i].second = str;
	}
	sort(vec.begin(), vec.end());
	for (i = 0; i < N; i++) {
		if (i + 1 < N && vec[i].second == vec[i + 1].second)
			continue;
		else
			cout << vec[i].second << "\n";
	}
	return 0;
}
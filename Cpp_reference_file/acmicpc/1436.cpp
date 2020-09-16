#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string check(int N) {
	int n = 665, cnt = 0;
	std::string::size_type found;
	while (cnt < N) {
		n++;
		found = to_string(n).find("666");
		if (found != std::string::npos)
			cnt++;
	}
	return to_string(n);
}

int main(void) {
	int N, M, i, j, min = 64, num;
	cin >> N;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cout << check(N);
	return 0;
}
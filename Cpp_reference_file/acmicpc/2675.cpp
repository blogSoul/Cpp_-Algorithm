#include<iostream>
#include<string> 
using namespace std;

int main(void) {
	int i, j, k, T, R;
	string str;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> R >> str;
		for (j = 0; j < str.size(); j++) {
			for (k = 0; k < R; k++)
				cout << str[j];
		}
		cout << "\n";
		str.clear();
	}
	return 0;
}
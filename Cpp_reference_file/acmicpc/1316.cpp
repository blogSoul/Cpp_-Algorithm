#include<iostream>
#include<string> 
using namespace std;

int main(void) {
	int i, j, N, count = 0;
	string str, str1;
	std::string::size_type n;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> str;
		for (j = 0; j < str.length() - 1; ) {
			if (str[j] == str[j + 1])
				str.erase(str.begin() + j);
			else
				j++;
		}
		// cout << str << "\n";
		for (j = 0; j < str.length(); j++) {
			n = str1.find(str[j]);
			if (n == std::string::npos)
				str1.append(1, str[j]);
		}
		if (str.compare(str1) == 0)
			count += 1;
		// cout << str1 << "\n";
		str1.clear();
	}
	cout << count << "\n";
	return 0;
}
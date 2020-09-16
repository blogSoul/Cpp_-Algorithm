#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int main(void) {
	string str;
	int i, num;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> str;
	num = str.size();
	int *arr = new int[num];
	for (i = 0; i < str.size(); i++) {
		arr[i] = str[i] - '0';
	}
	sort(arr, arr + num, desc);
	for (i = 0; i < str.size(); i++)
		cout << arr[i];
	return 0;
}
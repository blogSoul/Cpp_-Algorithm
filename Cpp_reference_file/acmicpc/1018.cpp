#include<iostream>
#include<algorithm>
using namespace std;

int checkArr(char ** arr, int n, int m) {
	int i, j, num1 = 0, num2 = 0, a;
	char color1, color2;
	if (arr[n][m] == 'W') {
		color1 = 'W';
		color2 = 'B';
	}
	else if (arr[n][m] == 'B') {
		color1 = 'B';
		color2 = 'W';
	}
	else
		return -1;
	a = (n + m) % 2;
	for (i = n; i < n + 8; i++) {
		for (j = m; j < m + 8; j++) {
			if ((i + j) % 2 == a && arr[i][j] != color1)
				num1++;
			else if ((i + j) % 2 != a && arr[i][j] != color2)
				num1++;
			if ((i + j) % 2 == a && arr[i][j] != color2)
				num2++;
			else if ((i + j) % 2 != a && arr[i][j] != color1)
				num2++;
		}
	}
	if (num1 < num2)
		return num1;
	else
		return num2;
}

int main(void) {
	int N, M, i, j, min = 64, num;
	cin >> N >> M;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	char ** arr = new char*[N];
	for (i = 0; i < N; i++)
		arr[i] = new char[M];
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}
	for (i = 0; i <= N - 8; i++) {
		for (j = 0; j <= M - 8; j++) {
			num = checkArr(arr, i, j);
			if (min > num && num != -1)
				min = num;
			//cout << num << endl;
		}
	}
	/*
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
	*/
	cout << min;
	return 0;
}
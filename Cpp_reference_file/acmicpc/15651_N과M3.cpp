#include<iostream>
using namespace std;

void dfs(int N, int M, int arr[9], bool visited[9], int cnt) {
	int i, j;
	if (cnt == M) {
		for (i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (i = 1; i <= N; i++) {
		arr[cnt] = i;
		dfs(N, M, arr, visited, cnt + 1);
	}
}

int main(void) {
	int N, M, i, j;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N >> M;
	int arr[9] = { 0, };
	bool visited[9] = { 0, };
	dfs(N, M, arr, visited, 0);
	return 0;
}
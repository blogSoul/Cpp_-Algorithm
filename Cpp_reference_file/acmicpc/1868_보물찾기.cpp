#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void) {
	int N, a, b, i;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	vector<int> * graph = new vector<int>[N + 1];
	for (i = 0; i < N - 1; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (i = 0; i < N; i++) {
		for (auto it = graph[i].begin(); it != graph[i].end(); it++) {
			cout << *it << " ";
		}
		cout << "\n";
	}

	delete[] graph;
	return 0;
}
// 힌트: https://www.secmem.org/blog/2019/07/20/Optimal-Search-On-Tree/
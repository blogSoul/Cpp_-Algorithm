#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int check(int N, int M) {
	if (N == 1)
		return 0;
	else if (N == 2)
		return 1;
	else
}

int main(void) {
	int N, M, a, b, i;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N >> M;
	cout << check(N, M);
	return 0;
}
// 정답: http://ukt.alex-black.ru/
// 해당 사이트: https://www.acmicpc.net/problem/15698
// 풀이: https://www.youtube.com/watch?v=X-WuYwM6WEc
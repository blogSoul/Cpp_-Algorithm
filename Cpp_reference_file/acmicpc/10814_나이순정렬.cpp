#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool asc(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main(void) {
	int N, i;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;
	vector<pair<int, string>> vec(N);
	for (i = 0; i < N; i++) {
		cin >> vec[i].first >> vec[i].second;
	}
	stable_sort(vec.begin(), vec.end(), asc);
	for (i = 0; i < N; i++) {
		cout << vec[i].first << " " << vec[i].second << "\n";
	}
	return 0;
}
// stable_sort은 구조체처럼 여러 값들이 묶여 있을 때, 하나의 요소로 정렬을 했을 때, 
// 다른 요소들의 정렬 순서도 정렬 전과 같이 그대로 유지 될 수 있도록 하는 정렬이다.

/*
이렇게 람다식을 사용할 수도 있습니다.
stable_sort(vec.begin(), vec.end(), [](const pair<int, string> u, const pair<int, string> v)->bool{
    return u.first < v.first;
});
*/
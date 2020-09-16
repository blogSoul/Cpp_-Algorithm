#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(void) {
	int i, N, temp, arr[8001] = {0, }, cnt = 0, mid_cnt = 0;
	int avg = 0, Much = 0, Much_cnt = 0, Much_check = 0, range = 0;
	double mid = 0;
	scanf("%d", &N);
	//cin.tie(NULL);
	//ios::sync_with_stdio(false);
	for (i = 0; i < N; i++) {
		scanf("%d", &temp);
		arr[temp + 4000]++;
		cnt++;
	}
	if (cnt % 2 == 0)
		temp = cnt / 2;
	else {
		temp = cnt / (double)2 + 0.5;
	}
	//printf("%d\n", temp);
	for (i = 0; i < 8001; i++) {
		// 최빈값
		if (arr[i] > Much_cnt) {
			Much = i - 4000;
			Much_cnt = arr[i];
			Much_check = 0; // 두번째 입력횟수가 같은 숫자를 위한 변수
		}
		else if (arr[i] == Much_cnt && Much_check == 0) {
			Much = i - 4000;
			Much_cnt = arr[i];
			Much_check = 1;
		}
		while (arr[i] > 0) {
			// 평균
			avg += i - 4000;
			// 중앙값
			if (cnt % 2 == 0) { // 짝수이면 중앙에 가까운 두 변수의 평균을 구합니다.
				if(temp - 1 == mid_cnt)
					mid += i - 4000;
				if(temp == mid_cnt)
					mid += i - 4000;
				if (temp == mid_cnt + 1)
					mid = mid / 2;
			}
			if(cnt % 2 == 1 && temp - 1 == mid_cnt)
				mid = i - 4000;
			// 범위
			if(mid_cnt == 0 && arr[i] != 0)
				range -= i;
			if (mid_cnt == cnt -1 && arr[i] != 0)
				range += i;
			arr[i]--;
			mid_cnt++;
		}
	}
	printf("%g\n%g\n%d\n%d", floor(avg / (double)cnt + 0.5), mid, Much, range);
	return 0;
}
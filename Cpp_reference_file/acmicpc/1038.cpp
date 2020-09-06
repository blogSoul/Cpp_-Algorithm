#include<iostream>
#include<cmath>
#include<typeinfo>
using namespace std;

long long find(int x, int y, int count) {
	int i, j;
	long long result = 0;
	for (i = x; i >= 0; i--) {
		if (i != x) {
			result += i * pow(10, i);
		}
		else {
			result += y * pow(10, x);
		}
	}
	count = count - 1;
	if(count==0)
		return result;
	else {
		while (count != 0) {
			for (i = x - 1; i >= 0; i--) {
				result += pow(10, i);
				count = count - 1;
                // 이 부분에 감소수를 순서대로 구할 수 있는 방법이 필요
				printf("result: %lld\n", result);
				if (count == 0)
					return result;
			}
		}
	}
} // 감소수 찾기

int main(void) {
	int dp[10][10] = { 0, }, i, j, k, N, sum = 0;
	scanf("%d", &N);
	if (N == 0) {
		printf("0\n");
		return 0;
	}
	else if (N == 1022) {
		printf("9876543210\n");
		return 0;
	}
	else if (N > 1022) {
		printf("-1\n");
		return 0;
	} // 예외값 설치
	for (i = 0; i < 10; i++)
		dp[0][i] = 1;
	for (i = 1; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			for (k = 0; k < j; k++) {
				dp[i][j] += dp[i - 1][k];
			}
		}
	} // add dp array
	/* check dp array
	for (i = 0; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf(" %d", dp[i][j]);
		}
		printf("\n");
	}
	*/
	for (i = 0; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			if (sum < N && N <= sum + dp[i][j]) {
				printf("%lld\n", find(i, j, N - sum));
				return 0;
			}
			else
				sum += dp[i][j];
		}
	}
	return 0;
}
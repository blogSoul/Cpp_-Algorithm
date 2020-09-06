#include<iostream>
#include<string.h>
using namespace std;
// DP의 기본 문제
int min(int a, int b) {
	return a < b ? a : b;
}

int main(void) {
	int N, sum;
	scanf("%d", &N);
	int **array = new int*[N];
	int **dp = new int*[N];
	for (int i = 0; i < N; i++) {
		array[i] = new int[3];
		dp[i] = new int[3];
	}
	for (int i = 0; i < N; i++)
		scanf("%d %d %d", &array[i][0], &array[i][1], &array[i][2]);
	dp[0][0] = array[0][0];
	dp[0][1] = array[0][1];
	dp[0][2] = array[0][2];
	for (int i = 1; i < N; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + array[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + array[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + array[i][2];
	}
	sum = dp[N - 1][0];
	for (int i = 0; i < 3; i++) {
		if (dp[N - 1][i] <= sum)
			sum = dp[N - 1][i];
	}
	printf("%d\n", sum);
	for (int i = 0; i < N; i++){
		delete[] array[i];
		delete[] dp[i];
	}
	delete[] array;
	delete[] dp;
	return 0;
}
/* 이런식으로 삼항 연산 비교를 사용하면 안 됩니다.
#include<iostream>
#include<string.h>
using namespace std;

int min(int a, int b) {
	if (a <= b)
		return a;
	else
		return b;
}

int min(int a, int b, int c) {
	if (a <= b && a <= c)
		return a;
	else if (b <= a && b <= c)
		return b;
	else if (c <= a && c <= b)
		return c;
}

int checkmin(int a, int b, int c) {
	if (a <= b && a <= c)
		return 0;
	else if (b <= a && b <= c)
		return 1;
	else if (c <= a && c <= b)
		return 2;
}

int main(void) {
	int N, sum = 0, check;
	scanf("%d", &N);
	int **array = new int*[N];
	for (int i = 0; i < N; i++) {
		array[i] = new int[3];
		memset(array[i], 0, sizeof(int)*N); // 초기화
	}
	for (int i = 0; i < N; i++)
		scanf("%d %d %d", &array[i][0], &array[i][1], &array[i][2]);
	for (int i = 0; i < N; i++) {
		if (i != 0) {
			if (check == 0) {
				sum += min(array[i][1], array[i][2]);
				if (array[i][1] < array[i][2])
					check = 1;
				else
					check = 2;
			}
			else if (check == 1) {
				sum += min(array[i][0], array[i][2]);
				if (array[i][0] < array[i][2])
					check = 0;
				else
					check = 2;
			}
			else if (check == 2) {
				sum += min(array[i][0], array[i][1]);
				if (array[i][0] < array[i][1])
					check = 0;
				else
					check = 1;
			}
			//printf("sum: %d\n", sum);
		}
		else {
			sum += min(array[i][0], array[i][1], array[i][2]);
			//printf("sum: %d\n", sum);
			if (checkmin(array[i][0], array[i][1], array[i][2]) == 0)
				check = 0;
			else if (checkmin(array[i][0], array[i][1], array[i][2]) == 1)
				check = 1;
			else if (checkmin(array[i][0], array[i][1], array[i][2]) == 2)
				check = 2;
		}
	}
	printf("%d\n", sum);
	for (int i = 0; i < N; i++)
		delete[] array[i];
	delete[] array;
	return 0;
}
*/
// 분해합!!
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int count(int num) {
	int i = 0;
	while (num / pow(10, i) >= 10) {
		//cout << num / pow(10, i) << endl;
		i++;
	}
	return i + 1;
} // 자릿수 구하기

int checkN(int n) {
	int i = 0, sum = n;
	while (n != 0) {
		sum += n % 10;
		n = n / 10;
	}
	//cout << sum << endl;
	return sum;
} // 생성자 반환

int main(void) {
	int N, i, j, num, start, end;
	cin >> N;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	num = count(N);
	start = N - 9 * num;
	end = N;
	for (i = start; i <= end; i++) {
		if (checkN(i) == N)
			break;
	}
	if (i == end + 1)
		cout << 0;
	else
		cout << i;
	return 0;
}
/*
#include <iostream>
#include <cstring>

using namespace std;

int main() {

	long n;
    std::cin >> n;
    // 숫자자릿수부터 계산
    long m = n;
    int digit = 0;
    while (m)
    {
        m /= 10;
        digit++;
    }
    // 분해합은 최소 n - 9*n의 자릿수 부터 시작
    long begin = n - digit * 9;
    char s[10];
    long sum = 0;
	bool find=false;
    for (long i = begin; i <= n; ++i)
    {
        sprintf(s, "%ld", i); // 느립니다.
        // int sprintf(char *buffer, const char *format, argument-list);
        // printf 함수와 같이 서식에 맞춰 출력한다. 다만 출력하는 위치가 모니터가 아닌  buffer  배열일 뿐이다.
        sum = i;
		for(int j=0;j<strlen(s);++j)
			sum += s[j]-'0';
        if(sum == n )
		{
			find=true;
			cout << i << "\n";
			break;
		}
    }
	if(find==false)	cout << "0\n";

	return 0;
}
*/
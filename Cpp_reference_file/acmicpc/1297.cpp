#include<iostream>
#include<cmath>
using namespace std;

int main(void) {
	int a, b, c;
	double t1, t2, r;
	scanf("%d %d %d", &a, &b, &c);
	r = sqrt(b * b + c * c);
	t1 = a * b / r;
	t2 = a * c / r;
	printf("%d %d\n", (int)t1, (int)t2);
	return 0;
}
// 소숫점 계산은 한꺼번에 계산하지 말 것!
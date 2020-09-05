#include<iostream>
using namespace std;

int main(void) {
	int a, b, c, r;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c)
		printf("-1\n");
	else {
		r = a / (c - b) + 1;
		printf("%d\n", r);
	}
	return 0;
}
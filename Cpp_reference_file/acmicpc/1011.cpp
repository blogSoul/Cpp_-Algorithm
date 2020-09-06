#include<iostream>
#include<cmath>
using namespace std;

double findX(double num) {
	double i;
	for (i = 0; i <= pow(2, 16); i++) {
		if (pow(i, 2) > num)
			break;
	}
	return i;
} // num보다 크면서 가까운 제곱 수 찾기

int main(void) {
	int T;
	double start, end, term, temp;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%lf %lf", &start, &end);
		term = end - start;
		temp = findX(term);
		if (term == pow(temp - 1, 2)) {
			printf("%g\n", 2 * temp - 3);
		}
		else if (term > pow(temp - 1, 2) && term < (pow(temp, 2) + pow(temp - 1, 2)) / 2) {
			printf("%g\n", 2 * temp - 2);
		} 
		else {
			printf("%g\n", 2 * temp - 1);
		} 
		/*
		temp-1의 제곱 : 2 * temp - 3
		temp-1의 제곱 + 1부터 중간까지 : 2 * temp - 2
		중간부터 temp의 제곱까지 : 2 * temp - 1
		*/
	}
	return 0;
}
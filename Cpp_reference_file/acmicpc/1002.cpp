#include<iostream>
#include <cmath>
using namespace std;

int main(void) {
	int min, max, T, x1, x2, y1, y2, r1, r2;
	double a;
	cin >> T;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		if (r1 > r2) {
			min = r2;
			max = r1;
		}
		else {
			min = r1;
			max = r2;
		}
		//cout << a << " " << min << " " << max << " ";
		if (a == 0) {
			if (max == min)
				cout << "-1";
			else
				cout << "0";
		}
		else if (a > max - min && a < max + min)
			cout << "2";
		else if (a == max - min || a == max + min)
			cout << "1";
		else if(a > max + min || a < max - min)
			cout << "0";
		cout << "\n";
	}
	return 0;
}
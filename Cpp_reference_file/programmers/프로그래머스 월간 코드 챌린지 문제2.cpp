#include <iostream>
#include <string>
#include <vector>
using namespace std;

int v[1000][1000];
void fill(int i, int j, int n, int &count)
{
	for (int k = 0; k < n; k++)
		v[i + k][j] = count++;
	for (int k = 1; k < n; k++)
		v[i + n - 1][j + k] = count++;
	for (int k = 1; k < n - 1; k++)
		v[i + n - 1 - k][j + n - 1 - k] = count++;
}
vector<int> solution(int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i + 1; j++)
			v[i][j] = 0;
	int last_value = 0;
	for (int i = 0; i < n; i++)
		last_value += i + 1;
	int count = 1;
	int i = 0, j = 0;
	int size = n;
	while (1)
	{
		if (count == last_value + 1)
			break;
		fill(i, j, size, count);
		i = i + 2;
		j = j + 1;
		size -= 3;
	}
	vector<int> answer;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i + 1; j++)
			answer.push_back(v[i][j]);
	return answer;
}
int main() {
	solution(6);
	return 0;
}
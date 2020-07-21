#include <iostream>
#include <thread>
using namespace std;
const int n = 8;
enum states { IDLE, WAITING, ACTIVE } flags[n];
int turn;
void entryProtocol(int i) {
	int index;
	do {
		flags[i] = WAITING;

		index = turn;
		while (index != i) {
			if (flags[index] != IDLE)
				index = turn;
			else
				index = (index + 1) % n;
		}

		flags[i] = ACTIVE;

		index = 0;
		while ((index < n) && ((index == i) || (flags[index] != ACTIVE)))
			index++;
	} while (!((index >= n) && ((turn == i) || (flags[turn] == IDLE))));

	turn = i;
}
void exitProtocol(int i) {
	int index = (turn + 1) % n;
	while (flags[index] == IDLE) {
		index = (index + 1) % n;
	}

	turn = index;
	flags[i] = IDLE;
}
void run(int i) {
	entryProtocol(i);
	cout << "thread " << i << " is running\n";
	exitProtocol(i);
}

int main() {
	turn = 0;
	for (int index = 0; index < n; index++) {
		flags[index] = IDLE;
	}

	thread ts[n];
	for (int i = 0; i < n; i++) {
		ts[i] = thread(run, i);
	}
	for (int i = 0; i < n; i++) {
		ts[i].join();
	}

	return 0;
}

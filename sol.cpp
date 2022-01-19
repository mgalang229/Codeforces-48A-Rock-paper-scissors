#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n = 3;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	// just check if the current player wins against both of the remaining players
	char players[] = {'F', 'M', 'S'};
	bool checker = false;
	for (int i = 0; i < n; i++) {
		if (s[i] == "paper" && s[(i + 1) % 3] == "rock" && s[(i + 2) % 3] == "rock") {
			checker = true;
		} else if (s[i] == "rock" && s[(i + 1) % 3] == "scissors" && s[(i + 2) % 3] == "scissors") {
			checker = true;
		} else if (s[i] == "scissors" && s[(i + 1) % 3] == "paper" && s[(i + 2) % 3] == "paper") {
			checker = true;
		}
		if (checker) {
			cout << players[i] << '\n';
			return 0;
		}
	}
	cout << "?" << '\n';
	return 0;
}

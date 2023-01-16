#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int	mat[501][501];
	int sum, n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cin >> mat[i][j];
		}
	}

	for (int i = n - 1; i != 0; i--) {
		for (int j = 0; j < i; j++) {
			mat[i - 1][j] += max(mat[i][j], mat[i][j + 1]);
		}
	}

	cout << mat[0][0];

	return 0;
}
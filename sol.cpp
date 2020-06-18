#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n;
	cin >> n;
	int t = 1, cnt = 0;
	while (n > 0) {
		if (n < t) {
			break;
		}
		n -= t;
		cnt++;
		t++;
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		decode();
	}
	return 0;
}

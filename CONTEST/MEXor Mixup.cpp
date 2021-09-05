#include <bits/stdc++.h>
using namespace std;


vector<int> total(400000 + 1);

void solve() {
	total[0] = 0;
	for (int i = 1; i <= 400000; i++) {
		total[i] = total[i - 1] ^ i;
	}
}


int main() {

	solve();
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;

		int res = a;
		if ((b ^ total[a - 1]) == a) {
			res++;
		}
		if (b != total[a - 1]) {
			res++;
		}

		cout << res << "\n";


	}
	return 0;
}
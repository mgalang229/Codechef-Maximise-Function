#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int min_element = a[0];
		int max_element = a[0];
		for (int i = 1; i < n; i++) {
			// get the min and max elements
			min_element = min(min_element, a[i]);
			max_element = max(max_element, a[i]);
		}
		// check the 2nd image in the repository for the derivation of this formula
		long long int ans = 2LL * (max_element - min_element);
		cout << ans << '\n';
	}
	return 0;
}

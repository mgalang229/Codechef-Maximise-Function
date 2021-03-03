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
		vector<long long> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort the array in non-decreasing order
		sort(a.begin(), a.end());
		// store the smallest element in the 'low' variable
		long long low = a[0];
		// store the largest elements in the 'high' variable
		long long high = a[n - 1];
		// create a 'temp' variable to find the correct element that would produce the largest sum
		long long temp = LLONG_MIN;
		for (int i = 1; i < n - 1; i++) {
			// check if the the current element would produce a larger sum than the stored sum
			if (abs(low - a[i]) + abs(a[i] - high) + abs(high - low) > abs(low - temp) + abs(temp - high) + abs(high - low)) {
				temp = a[i];
			}
		}
		// store 'temp' to the 'mid' variable
		long long mid = temp;
		// lastly, do the operation that is provided in the problem
		cout << abs(low - mid) + abs(mid - high) + abs(high - low) << '\n';
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int ntc;
	cin >> ntc;
	for (int tc = 1; tc <= ntc; tc++) {
		int n;
		cin >> n;
		vector<long long> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> p(n);
		vector<vector<int>> ad(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
			if (p[i] == 0) {
				continue;
			}
			ad[p[i] - 1].push_back(i);
			ad[i].push_back(p[i] - 1);
		}
		long long res = 0;
		function<long long(int, int)> dfs = [&](int cur, int par) {
			long long sum = 0;
			long long mn = 1LL << 60;
			for (int ch: ad[cur]) {
				if (ch == par) {
					continue;
				}
				long long v = dfs(ch, cur);
				sum += v;
				mn = min(mn, v);
			}
			if (mn > (1LL << 55)) {
				return a[cur];
			}
			sum -= mn;
			res += sum;
			mn = max(mn, a[cur]);
			return mn;
		};
		for (int i = 0; i < n; i++) {
			if (p[i] > 0) {
				continue;
			}
			res += dfs(i, -1);
		}
		cout << "Case #" << tc << ": " << res << "\n";
	}
	return  0;
} 

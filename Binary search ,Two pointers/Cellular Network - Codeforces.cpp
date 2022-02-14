/*
 *      Binary search
 *      C. Cellular Network
 *      Link : https://codeforces.com/problemset/problem/702/C
 *      By Abdelrahman Hussein
 */
#include<bits/stdc++.h>
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())
#define ll long long
using namespace std;
int n, m;
vector<ll>a,b;
bool can(ll x) {
	ll idx = 0;
	for (int i = 0; i < n; i++) {
		if (idx == m)return 0;
		if (abs(a[i] - b[idx])>x)idx++, i--;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
	cin >> n >> m;
	a.resize(n);
	b.resize(m);
	for (auto &x:a)cin >> x;
	for (auto &x:b)cin >> x;
	ll l=0, r = 1e18,ans;
	while (l <= r) {
		ll mid = (l + r) / 2;
		if (can(mid)) {
			r = mid - 1;
			ans = mid;
		}
		else l = mid + 1;
	}
	cout << ans ;
	return 0;
}

/*
 *      Bitmasking
 *      B. New Year and Old Property
 *      Link : https://codeforces.com/problemset/problem/611/B
 *      By Abdelrahman Hussein
 */
#include<bits/stdc++.h>
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())
#define ll long long
using namespace std;
ll solve() {
	ll a, b, bits = 0, ans = 0;
	cin >> a >> b;
	ll tem = a;
	while (tem) {
		tem >>= 1;
		bits++;
	}
	for (ll i = bits;; i++) {
		ll mask = (1LL << i) - 1;
		for (ll j = i - 2; j >= 0; j--) {
			ll sub = mask - (1LL << j);
			if (sub >= a && sub <= b)ans++;
			else if (sub > b)return ans;
		}
	}
	return ans;
}
int	main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
	cout << solve();
	return 0;
}

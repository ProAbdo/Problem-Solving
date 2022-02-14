/*
 *      DP
 *      C. Vacations
 *      Link : https://codeforces.com/contest/699/problem/C
 *      By Abdelrahman Hussein
 */
#include<bits/stdc++.h>
#define Case int t;cin>>t;while(t--)
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())
#define fx(x) fixed<<setprecision(x)
#define ll long long
#define PI acos(-1) 
#define sz(s) (s.size())
#define mem(a,n) memset(a,n,sizeof(a))
#define EPS 0.0000001
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };
int dx1[] = { -1,-1,-1,0,0,1,1,1 };
int dy1[] = { -1,0,1,-1,1,-1,0,1 };
int n, a[101], dp[101][101], INF = 1e9;
int solve(int i, int last) {
	if (i == n)return 0;
	int &ans = dp[i][last];
	if (~ans)return ans;
	ans = INF;
	if (a[i] == 1 && last != 1)
		ans = min(ans, solve(i + 1, 1));
	else if (a[i] == 2 && last != 2)
		ans = min(ans, solve(i + 1, 2));
	else if (a[i] == 3) {
		if (last != 1)ans = min(ans, solve(i + 1, 1));
		if (last != 2)ans = min(ans, solve(i + 1, 2));
	}
	else ans = min(ans, solve(i + 1, 0)+1);
	return ans;
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
	cin >> n;
	mem(dp, -1);
	for (int i = 0; i < n; i++)cin >> a[i];
	cout << solve(0, 4);
	return 0;
}

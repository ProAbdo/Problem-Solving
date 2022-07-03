/*
   Author : Abdelrahman Hussein
   Codeforces Handle  : [ProAbdo](https://codeforces.com/profile/ProAbdo)
   Link To problem : https://codeforces.com/gym/101755/problem/J
*/

#include <bits/stdc++.h>

using namespace std;
#define Case int t;cin>>t;while(t--)
#define sz(s) (int)(s.size())
#define RunFaster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())
#define ll long long
#define int ll
#define sz(s) (int)(s.size())
int const N = 1e5 + 7, NN = 105;
int const OO = 1e8;

void solve() {
    int n;
    cin >> n;
    map<int, int> mp;
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
        if (mp[x] == 2)mp[x] = 0, cnt++;
        if (cnt == 2)ans++, cnt = 0;
    }
    cout << ans << "\n";
}

signed main() {
    RunFaster;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("temp.txt", "w", stdout);
#else
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    solve();
}

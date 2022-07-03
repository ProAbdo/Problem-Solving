/*
   Author : Abdelrahman Hussein
   Codeforces Handle  : [ProAbdo](https://codeforces.com/profile/ProAbdo)
   Link To problem : https://codeforces.com/gym/101755/problem/K
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
    int n, m;
    cin >> n >> m;
    int l = 0, r = 1e8;
    vector<int> ve(n);
    for (auto &it: ve)cin >> it;
    auto ok = [&](int select) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (ve[i] > cnt && select)cnt++, select--;
            else if (ve[i] <= cnt)cnt++;
        }
        return cnt >= m;
    };
    int ans = 0;
    while (l <= r) {
        int mid = (r + l) / 2;
        if (ok(mid)) {
            r = mid - 1;
            ans = mid;
        } else l = mid + 1;
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
    //Case
    solve();
}

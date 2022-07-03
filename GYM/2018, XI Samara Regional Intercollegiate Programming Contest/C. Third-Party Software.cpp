/*
   Author : Abdelrahman Hussein
   Codeforces Handle  : [ProAbdo](https://codeforces.com/profile/ProAbdo)
   Link To problem : https://codeforces.com/gym/101755/problem/C
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
    vector<pair<int, int>> ve(n);
    for (auto &it: ve) {
        int x, y;
        cin >> x >> y;
        it.first = y;
        it.second = x;
    }
    sort(all(ve));
    vector<int> ans;
    int end = ve[0].first;
    ans.emplace_back(end);
    for (int i = 1; i < n; i++) {
        if (ve[i].second > end) {
            end = ve[i].first;
            ans.emplace_back(end);
        }
    }
    cout << sz(ans) << "\n";
    for (auto it: ans)cout << it << " ";
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

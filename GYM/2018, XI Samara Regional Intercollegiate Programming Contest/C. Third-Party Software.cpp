#include <bits/stdc++.h>
using namespace std;
#define Case int t;cin>>t;while(t--)
#define sz(s) (int)(s.size())
#define all(v) ((v).begin()),((v).end())
#define RunFaster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int ll

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

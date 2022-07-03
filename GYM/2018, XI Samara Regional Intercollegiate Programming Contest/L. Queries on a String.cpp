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
    string s;
    cin >> s;
    multiset<pair<char, int>> st;
    for (int i = 0; i < sz(s); i++) st.emplace(s[i], i);
    int q;
    cin >> q;
    vector<int> ends{0};
    while (q--) {
        string s;
        char c;
        cin >> s;
        if (s.back() == 'h') {
            cin >> c;
            auto it = st.lower_bound({c, ends.back()});
            if (ends.back() == -1) {
                ends.emplace_back(-1);
                cout << "NO\n";
            } else if (it != st.end() && it->first == c) {
                ends.emplace_back(it->second + 1);
                cout << "YES\n";
            } else {
                cout << "NO\n";
                ends.emplace_back(-1);
            }
        } else {
            ends.pop_back();
            if (ends.empty() || ends.back() != -1)
                cout << "YES\n";
            else cout << "NO\n";
        }
    }
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

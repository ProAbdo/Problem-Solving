/*
   Author : Abdelrahman Hussein
   Codeforces Handle  : [ProAbdo](https://codeforces.com/profile/ProAbdo)
   Link To problem : https://codeforces.com/gym/101755/problem/E
*/


#include <bits/stdc++.h>

using namespace std;
#define Case int t;cin>>t;while(t--)
#define sz(s) (int)(s.size())
#define RunFaster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())
#define ll long long
#define sz(s) (int)(s.size())

void solve() {
    string s, t;
    cin >> s >> t;
    int st = -1, end = -1;
    for (int i = 0; i < sz(s); i++) {
        if (s[i] != t[i] && st == -1)st = i;
        else if (s[i] != t[i])end = i;
    }
    if (st == -1 && end == -1)cout << "YES\n";
    else if (st != -1 && end != -1) {
        string sub_s = s.substr(st, end - st + 1);
        reverse(all(sub_s));
        string sub_t = t.substr(st, end - st + 1);
        if (sub_s == sub_t)cout << "YES\n";
        else cout << "NO\n";
    } else cout << "NO\n";

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

/*
   Author : Abdelrahman Hussein
   Codeforces Handle  : [ProAbdo](https://codeforces.com/profile/ProAbdo)
   Link To problem : https://codeforces.com/gym/101755/problem/A
*/
#include <bits/stdc++.h>

using namespace std;
#define Case int t;cin>>t;while(t--)
#define RunFaster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int ll

void solve() {
    int s, g;
    cin >> s >> g;
    if (__gcd(s - g, g) == g && s != g) cout << s - g << " " << g << "\n";
    else cout << "-1\n";

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

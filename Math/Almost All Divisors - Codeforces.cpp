/*
 *      Math
 *      D. Almost All Divisors
 *      Link : https://codeforces.com/contest/1165/problem/D
 *      By Abdelrahman Hussein
 */
#include<bits/stdc++.h>
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())
#define ll long long
using namespace std;
void solve(){
    int n;  cin>>n;
    int cnt=0;
    vector<ll>ve(n);

    for(auto &it:ve) {
        cin>>it;
    }
    sort(all(ve));

    ll ans=ve[0]*ve[n-1];

    for(int i=0;i<n;i++){
        if(ans%ve[i]!=0){
            cout<<"-1\n";
            return;
        }
    }

    for(ll i=2;i*i<=ans;i++){
        if(ans%i==0){
            cnt++;
            if(ans/i!=i)cnt++;
        }
    }

    if(cnt!=n){
        cout<<"-1\n";
        return;
    }

    cout<<ans<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("temp.txt", "w", stdout);
#endif
    int t;  cin>>t;
    while(t--){
        solve();
    }
}

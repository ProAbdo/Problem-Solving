/*
 *      Math
 *      E. Two Arrays and Sum of Functions
 *      Link : https://codeforces.com/contest/1165/problem/E
 *      By Abdelrahman Hussein
*/
#include<bits/stdc++.h>
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())
#define ll long long
const ll mod = 998244353;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("temp.txt", "w", stdout);
#else
    //freopen("wifi.in", "r", stdin);
#endif
    int n;cin>>n;
    vector<ll>a(n),b(n);
    ll ans=0;
    for(auto &it:a)
        cin>>it;
    
    for(auto &it:b)
        cin>>it;
    
    for(ll i=0;i<n;i++) 
        a[i]*=(i+1)*(n-i);
    
    sort(all(a));
    sort(rall(b));
    
    for(int i=0;i<n;i++) 
        ans+=((a[i]%mod)*(b[i]%mod))%mod;
    
    cout<<ans;
}

/*
 *      DFS - BFS
 *      C. King's Path
 *      Link : https://codeforces.com/contest/242/problem/C
 *      By Abdelrahman Hussein
 */
#include<bits/stdc++.h>
#define Case int t;cin>>t;while(t--)
#define all(v) ((v).begin()),((v).end())
#define rall(v) ((v).rbegin()),((v).rend())
#define fx(x) fixed<<setprecision(x)
#define ll long long
#define PI acos(-1)
#define sz(s) (int)(s.size())
#define mem(a,n) memset(a,n,sizeof(a))
#define EPS 0.0000001
int dx1[] = { -1,-1,-1,0,0,1,1,1 };
int dy1[] = { -1,0,1,-1,1,-1,0,1 };
using namespace std;
void solve(){
    set<pair<int,int>>nodes;
    int sx,sy,ex,ey;
    cin>>sx>>sy>>ex>>ey;
    int n;cin>>n;
    for(int i=0;i<n;i++){
       int r,a,b;
       cin>>r>>a>>b;
       for(int j=a;j<=b;j++)nodes.insert({r,j});
    }
    map<pair<int,int>,int>len;
    queue<pair<int,int>>q;
    pair<int,int>cur;
    q.emplace(sx,sy);
    len[{sx,sy}]=0;
    int dep=0,sz=1;
    for(;!q.empty();dep++,sz=q.size()){
        while(sz--) {
           cur = q.front(), q.pop();
           for(int i=0;i<8;i++){
               int x=cur.first+dx1[i];
               int y=cur.second+dy1[i];
               pair<int,int>curNode{x,y};
               if(!nodes.count(curNode)||len.count(curNode)!=0)continue;
               q.emplace(curNode),len[curNode]=dep+1;
               if(curNode.first==ex && curNode.second==ey){
                   cout<<dep+1<<"\n";
                   return;
               }
           }
       }
    }
    cout<<-1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("temp.txt", "w", stdout);
#endif
    //Case{
    solve();
   // };
}

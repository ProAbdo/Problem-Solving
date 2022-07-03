/*
   Author : Abdelrahman Hussein
   Codeforces Handle  : [ProAbdo](https://codeforces.com/profile/ProAbdo)
   Link To problem : https://codeforces.com/gym/101755/problem/H
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
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int n, m, d;
vector<vector<char>> grid;
queue<pair<int, int>> monstor;

bool valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}


void Mark() {
    while (d--) {
        int level = sz(monstor);
        while (level--) {
            auto cur = monstor.front();
            monstor.pop();
            for (int j = 0; j < 4; j++) {
                int xx = cur.first + dx[j];
                int yy = cur.second + dy[j];
                if (valid(xx, yy) && grid[xx][yy] != 'M') {
                    grid[xx][yy] = 'M';
                    monstor.emplace(xx, yy);
                }
            }
        }
    }
}

void solve() {
    cin >> n >> m >> d;
    pair<int, int> st, end;
    map<pair<int, int>, int> vis;
    grid = vector<vector<char>>(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'M')monstor.emplace(i, j);
            if (grid[i][j] == 'S')st = {i, j};
            else if (grid[i][j] == 'F')end = {i, j};
        }
    }
    Mark();
    if (grid[st.first][st.second] == 'M' || grid[end.first][end.second] == 'M') {
        cout << "-1\n";
        return;
    }
    queue<pair<int, int>> q;
    q.emplace(st.first, st.second);
    bool found = 0;
    int cnt = 1;
    while (sz(q)) {
        int level = sz(q);
        while (level--) {
            auto cur = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
                int xx = cur.first + dx[k];
                int yy = cur.second + dy[k];
                if (valid(xx, yy) && !vis.count({xx, yy})) {
                    if (grid[xx][yy] == '.')q.emplace(xx, yy);
                    if (grid[xx][yy] == 'F')found = 1;
                    vis[{xx, yy}] = 1;
                }
            }
        }
        if (found) {
            cout << cnt << "\n";
            return;
        }
        cnt++;
    }
    cout << "-1\n";
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

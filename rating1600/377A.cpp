#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)

// int main()
// {
//     fastio;
//     ll n, m, k;
//     cin >> n >> m >> k;

//     vector<vector<char>> v(n, vector<char>(m));

//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < m; j++)
//             cin>>v[i][j];
    
//     while( k > 0 ){
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < m; j++){
//                 int count = 0;
//                 if(v[i][j] == '.'){
//                     if (i == 0 && j == 0){
//                         if (v[i + 1][j] == '.') count++;
//                         if (v[i][j + 1] == '.') count++;

//                         if(count <= 1){
//                             v[i][j] = 'X';
//                             k--;
//                             if(k <= 0) goto giveAns;
//                         }
//                     } else if (i == 0 && j == m - 1){
//                         if (v[i][j - 1] == '.') count++;
//                         if (v[i + 1][j] == '.') count++;

//                         if (count <= 1)
//                         {
//                             v[i][j] = 'X';
//                             k--;
//                             if (k <= 0)
//                                 goto giveAns;
//                         }
//                     } else if(j == 0 && i != 0 && i != n - 1){
//                         if (v[i][j + 1] == '.') count++;
//                         if (v[i + 1][j] == '.') count++;
//                         if (v[i - 1][j] == '.') count++;
//                         if (count <= 1)
//                         {
//                             v[i][j] = 'X';
//                             k--;
//                             if (k <= 0)
//                                 goto giveAns;
//                         }
//                     } else if(j == m - 1 && i != 0 && i != n - 1){
//                         if (v[i][j - 1] == '.')
//                             count++;
//                         if (v[i + 1][j] == '.')
//                             count++;
//                         if (v[i - 1][j] == '.')
//                             count++;
//                         if (count <= 1)
//                         {
//                             v[i][j] = 'X';
//                             k--;
//                             if (k <= 0)
//                                 goto giveAns;
//                         }
//                     } else if(i == n - 1 && j == 0){
//                         if (v[i][j + 1] == '.')
//                             count++;
//                         if (v[i - 1][j] == '.')
//                             count++;
//                         if (count <= 1)
//                         {
//                             v[i][j] = 'X';
//                             k--;
//                             if (k <= 0)
//                                 goto giveAns;
//                         }
//                     } else if (i == n - 1 && j == m - 1){
//                         if (v[i][j - 1] == '.')
//                             count++;
//                         if (v[i - 1][j] == '.')
//                             count++;
//                         if (count <= 1)
//                         {
//                             v[i][j] = 'X';
//                             k--;
//                             if (k <= 0)
//                                 goto giveAns;
//                         }
//                     } else if(i == n - 1 && j != 0 && j != m - 1){
//                         if (v[i][j - 1] == '.')
//                             count++;
//                         if (v[i][j + 1] == '.')
//                             count++;
//                         if (v[i - 1][j] == '.')
//                             count++;
//                         if (count <= 1)
//                         {
//                             v[i][j] = 'X';
//                             k--;
//                             if (k <= 0)
//                                 goto giveAns;
//                         }
//                     } else {
//                         if (v[i][j - 1] == '.')
//                             count++;
//                         if (v[i + 1][j] == '.')
//                             count++;
//                         if (v[i - 1][j] == '.')
//                             count++;
//                         if(v[i][j + 1] == '.')
//                             count++;
//                         if (count <= 1)
//                         {
//                             v[i][j] = 'X';
//                             k--;
//                             if (k <= 0)
//                                 goto giveAns;
//                         }
//                     }
//                 }
//             }
//     }
//     giveAns:
//         for(int i = 0; i < n; i++){
//             for (int j = 0; j < m; j++)
//                 cout << v[i][j] << " ";
//             cout<<endl;
//         }
//     return 0;
// }

// int main()
// {
//     fastio;
//     ll n, m, k;
//     cin >> n >> m >> k;

//     vector<vector<char>> v(n, vector<char>(m));
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < m; j++)
//             cin >> v[i][j];

//     int dx[] = {-1, 1, 0, 0};
//     int dy[] = {0, 0, -1, 1};

//     while (k > 0)
//     {
//         bool changed = false;

//         for (int i = 0; i < n && k > 0; i++)
//         {
//             for (int j = 0; j < m && k > 0; j++)
//             {
//                 if (v[i][j] != '.')
//                     continue;

//                 int count = 0;
//                 for (int d = 0; d < 4; d++)
//                 {
//                     int ni = i + dx[d], nj = j + dy[d];
//                     if (ni >= 0 && ni < n && nj >= 0 && nj < m && v[ni][nj] == '.')
//                         count++;
//                 }

//                 if (count <= 1)
//                 {
//                     v[i][j] = 'X';
//                     k--;
//                     changed = true;
//                 }
//             }
//         }

//         if (!changed && k > 0)
//         {
//             for (int i = 0; i < n && k > 0; i++)
//             {
//                 for (int j = 0; j < m && k > 0; j++)
//                 {
//                     if (v[i][j] == '.')
//                     {
//                         v[i][j] = 'X';
//                         k--;
//                     }
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//             cout << v[i][j];
//         cout << '\n';
//     }

//     return 0;
// }

//using dfs

int n, m, k;
vector<vector<char>> a;
vector<vector<int>> vis;

int dx[4] = {+1, -1, 0, 0};
int dy[4] = {0, 0, +1, -1};

bool isValid(int x, int y)
{
    return !(x < 0 || y < 0 || x >= n || y >= m || a[x][y] != '.' || vis[x][y]);
}

void dfs(int x, int y)
{
    vis[x][y] = 1;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (isValid(nx, ny))
            dfs(nx, ny);
    }

    if (k > 0)
    {
        a[x][y] = 'X';
        k--;
    }
}

void Solve()
{
    cin >> n >> m >> k;
    a.assign(n, vector<char>(m));
    vis.assign(n, vector<int>(m, 0));

    int sx = -1, sy = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '.' && sx == -1)
                sx = i, sy = j;
        }
    }

    dfs(sx, sy);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j];
        cout << '\n';
    }
}

int main()
{
    fastio;

    int t = 1;
    while (t--)
    {
        Solve();
    }
    return 0;
}
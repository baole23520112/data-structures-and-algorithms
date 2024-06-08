#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n, m, count1;
bool check = false;
string s;
void Try(int i, int j, int cnt, int a[6][6], vector<vector<char>> board)
{
    if (cnt == count1 - 1)
    {
        check = true;
        return;
    }
    for (int k = 0; k < 4; k++)
    {
        int x = dx[k] + i;
        int y = dy[k] + j;
        if (0 <= x && x < n && 0 <= y && y < m && cnt + 1 < count1 && s[cnt + 1] == board[x][y] && a[x][y] == 0)
        {
            a[x][y] = 1;
            Try(x, y, cnt + 1, a, board);
            a[x][y] = 0;
        }
    }
}
bool exist(vector<vector<char>>& board, string word) {
    set<char> se, ok;
    for (auto x : board)
    {
        for (char k : x)
        {
            ok.insert(k);
        }
    }
    for (char x : word) 
    {
        se.insert(x);
        if (ok.find(x) == ok.end()) return false;
    }
    n = board.size();
    m = board[0].size();
    count1 = word.size();
    int a[6][6] = {0};
    s = word;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == s[0])
            {
                a[i][j] = 1;
                Try(i, j, 0, a, board);
                a[i][j] = 0;
                if (check) return true;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vector<char>> v;
    int z, x; cin >> z >> x;
    for (int i = 0; i < z; i++)
    {
        vector<char> temp;
        for (int j = 0; j < x; j++)
        {
            char x; cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    string word; cin >> word;
    if (exist(v, word)) cout << "YES";
    else cout << "NO";
    return 0;
}
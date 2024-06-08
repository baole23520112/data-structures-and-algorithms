#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

int a[1001][1001];

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    vector<int> v[n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j]) 
            {
                cout << i << ' ' << j << endl;
                v[i].push_back(j);
            }
        }
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        for (auto x : v[i])
        {
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
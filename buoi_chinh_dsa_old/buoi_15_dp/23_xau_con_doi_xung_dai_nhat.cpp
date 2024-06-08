#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

bool dp[1005][1005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(dp, 0, sizeof(dp));
    string s; cin >> s;
    int n = s.size();
    s = '@' + s;
    for (int i = 1; i <= n; i++) dp[i][i] = 1;
    int ans = 0;
    for (int len = 2; len <= n; len++)
    {
        for (int i = 1; i <= n - len + 1; i++)
        {
            int j = i + len - 1;
            if (len == 2) 
                dp[i][j] = (s[i] == s[j]);
            else 
                dp[i][j] = (s[i] == s[j]) && dp[i + 1][j - 1];
            if (dp[i][j])
                ans = max(ans, j - i + 1);
        }
    }
    cout << ans;
    return 0;
}
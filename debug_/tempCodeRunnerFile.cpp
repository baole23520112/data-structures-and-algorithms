#include <bits/stdc++.h>
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

char a[1005][1005];

ll powmod(ll a, ll b, ll c){
    ll res = 1;
    while(b){
        if (b & 1){
            res *= a;
            res %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    ll max1 = 0;
    ll count = 0;
    ll temp = 0;
    for (int i = 0; i < n; i++){
        count = 0;
        temp = 0;
        for (int j = 0; j < n; j++){
            if (a[i][j] == '#')
            {
                count++;
            }
            else
            {
                if (count == 0) continue;
                temp = (temp % mod) + (powmod(count, count, mod) % mod) % mod;
                count = 0;
            }
        }
        if (count != 0)
            temp = (temp % mod) + (powmod(count, count, mod)) % mod;
        max1 = max(max1, temp);
    }
    cout << max1 << ' ';
    max1 = 0;
    for (int i = 0; i < n; i++){
        count = 0;
        temp = 0;
        for (int j = 0; j < n; j++){
            if (a[j][i] == '#')
            {
                count++;
            }
            else
            {
                if (count == 0) continue;
                temp = (temp % mod) + (powmod(count, count, mod) % mod) % mod;
                count = 0;
            }
        }
        if (count != 0)
            temp = (temp % mod) + (powmod(count, count, mod)) % mod;
        max1 = max(max1, temp);
    }
    cout << max1;
    return 0;
}
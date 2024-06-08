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

vector<int> ngto;
int s, k, x[15], sum = 0, ok = 0;

bool check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }
    return n > 1;
}

void ktao()
{
    for (int i = 2; i <= s; i++)
    {
        if (check(i)) ngto.push_back(i);
    }
}

void Try(int i, int position)
{
    for (int j = position; j < ngto.size(); j++)
    {   
        if (sum + ngto[j] <= s)
        {
            x[i] = ngto[j];
            sum += ngto[j];
            if (sum == s && i == k)
            {
                ok = 1;
                for (int k = 1; k <= i; k++)
                {
                    cout << x[k];
                    if (k != i) cout << " + ";
                }
                cout << endl;
            }
            else Try(i + 1, j + 1);
            sum -= ngto[j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s >> k;
    ktao();
    Try(1, 0);
    if (!ok) cout << "NOT FOUND";
    return 0;
}
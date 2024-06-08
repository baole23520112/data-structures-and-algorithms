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

ll btk(ll n, ll k)
{
	if (k == (ll)pow(2, n - 1))
		return n;
	if (k < (ll)pow(2, n - 1))
		return btk(n - 1, k);
	else if (k > (ll)pow(2, n - 1))
		return btk(n - 1, k - (ll)pow(2, n - 1));
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n, k; cin >> n >> k;
	cout << btk(n, k);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

ll cnt(long long n, int p){
	ll res = 0;
	for (ll i = p; i <= n; i *= p){ // 2^1, 2^2, 2^3
		// 8/2^1, 8/2^2, 8/2^3
		res += 1ll * (n / i);
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long n;
	int p;
	cin >> n >> p;
	cout << cnt(n, p);
	return 0;
}
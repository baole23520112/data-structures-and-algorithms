#include <bits/stdc++.h>
using namespace std;

using ll = long long;



int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> mp;
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
    	cin >> a[i];
    	mp[a[i]]++;
	}
	long long sum = 0;
	for (auto it = mp.rbegin(); it != mp.rend(); it++){
        int temp = it->second;
		it->second = sum;
		sum = sum + temp * it->first;
	}
	for (int i = 0; i < n; i++){
		cout << mp[a[i]] << ' ';
	}
    return 0;
}
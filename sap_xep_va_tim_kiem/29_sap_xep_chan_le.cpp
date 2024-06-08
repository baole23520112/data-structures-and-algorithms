#include <bits/stdc++.h>
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> chan, le;
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (i & 1) le.push_back(x);
        else chan.push_back(x);
    }
    sort(chan.begin(), chan.end());
    sort(le.begin(), le.end(), greater<int>());
    int i = 0, j = 0;
    for (int k = 0; k < n; k++){
        if (k & 1){
            cout << le[j] << ' ';
            j++;
        }
        else {
            cout << chan[i] << ' ';
            i++;
        }
    }
    return 0;
}
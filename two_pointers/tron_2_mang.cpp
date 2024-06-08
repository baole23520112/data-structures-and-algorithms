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
    int n, m; cin >> n >> m;
    int a[n], b[m];
    vector<int> ans;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m){
        if (a[i] <= b[j]){
            ans.push_back(a[i]);
            i++;
        }
        else {
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i < n){
        ans.push_back(a[i]);
        i++;
    }
    while(j < m){
        ans.push_back(b[j]);
        j++;
    }
    for (int x : ans){
        cout << x << ' ';
    }
    return 0;
}
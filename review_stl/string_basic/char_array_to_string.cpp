#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string array_to_string(char a[], int n){
    string ans = "";
    for (int i = 0; i < n; i++){
        ans += a[i];
    }
    return ans;
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    char a[10001];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << array_to_string(a, n) << endl;
    return 0;
}
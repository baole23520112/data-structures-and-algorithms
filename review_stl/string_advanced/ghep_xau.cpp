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
    int n; cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        v.push_back(s);
    }
    // cách ghi hàm trong hàm
    sort(v.begin(), v.end(), [](string a, string b)->bool{
        string ab = a + b;
        string ba = b + a;
        return ab > ba;
    });
    for (auto x : v){
        cout << x;
    }
    return 0;
}
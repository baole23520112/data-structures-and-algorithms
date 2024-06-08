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
    map<string, vector<pair<int, int>>> a;
    string s;
    while(cin >> s){
        int x, y; cin >> x >> y;
        a[s].push_back({x, y});
    }
    for (auto it = a.rbegin(); it != a.rend(); it++){
        cout << (*it).first << " : ";
        int tong = 0;
        int diem = 0;
        for (auto y : (*it).second){
            tong += y.first;
            diem += y.first * y.second;
        }
        cout << fixed << setprecision(2) << 1.0 * diem / tong << endl;
    }
    return 0;
}
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
    map<string, int> a;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        a[s]++;
    }
    pair<string, int> max = *(a.begin()), min = *(a.begin());
    for (auto x : a){
        if (max.second < x.second){
            max = x;
        }
        if (min.second > x.second){
            min = x;
        }
        cout << x.first << ' ' << x.second << endl;
    }
    cout << endl;
    cout << min.first << ' ' << min.second << endl;
    cout << max.first << ' ' << max.second << endl;
    return 0;
}
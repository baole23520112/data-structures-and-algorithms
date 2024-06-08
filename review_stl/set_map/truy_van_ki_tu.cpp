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
    map<char, int> a;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        a[s[i]]++;
    }
    pair<char, int> max = *(a.begin());
    pair<char, int> min = *(a.begin());
    for (auto x : a){
        if (x.second > max.second){
            max = x;
        }
        if (x.second <= min.second){
            min = x;
        }
    }
    cout << max.first << ' ' << max.second << endl;
    cout << min.first << ' ' << min.second << endl;
    cout << a.size() << endl;
    return 0;
}
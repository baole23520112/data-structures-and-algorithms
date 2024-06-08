// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// bool cmp(pair<string, int> a, pair<string, int> b){
//     if (a.second != b.second)
//         return a.second < b.second;
//     return a.first > b.first;
// }

// bool cmp1(pair<string, int> a, pair<string, int> b){
//     if (a.second != b.second)
//         return a.second < b.second;
//     return a.first < b.first;
// }

// int main(){
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     // #endif
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     vector<pair<string, int>> a;
//     string s;
//     while(cin >> s){
//         bool check = true;
//         for (int i = 0; i < a.size(); i++){
//             if (a[i].first == s){
//                 a[i].second++;
//                 check = false;
//             }
//         }
//         if (check) a.push_back({s, 1});
//     }
//     vector<pair<string, int>> b;
//     for (auto x : a){
//         b.push_back({x.first, x.second});
//     }
//     sort(a.begin(), a.end(), cmp);
//     sort(b.begin(), b.end(), cmp1);
//     cout << b[b.size() - 1].first << ' ' << b[b.size() - 1].second << endl;
//     cout << a[0].first << ' ' << a[0].second << endl;
//     return 0;
// }

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
    map<string, int> mp;
    string s;
    while(cin >> s){
        mp[s]++;
    }
    string res1, res2;
    int min = 1e9, max = 0;
    for (auto x : mp){
        if (min >= x.second){
            min = x.second;
            res1 = x.first;
        }
        if (max <= x.second){
            max = x.second;
            res2 = x.first;
        }
    }
    cout << res2 << ' ' << max << endl;
    cout << res1 << ' ' << min << endl;
    return 0;
}

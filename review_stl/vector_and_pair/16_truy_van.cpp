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
    int n, q; cin >> n >> q;
    vector<vector<string>> v1;
    for (int i = 0; i < n; i++){
        vector<string> v2;
        string s;
        getline(cin , s);
        stringstream ss(s);
        string num;
        while(ss >> num){
            v2.push_back(num);
        }
        v1.push_back(v2);
    }
    while(q--){
        int x, y; cin >> x >> y;
        cout << v1[x][y] << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main(){
//     int n, q; cin >> n >> q;
//     vector<int> v[n];
//     for(int i = 0; i < n; i++){
//         int m; cin >> m;
//         for(int j = 0; j < m; j++){
//             int x; cin >> x;
//             v[i].push_back(x);
//         }
//     }
//     while(q--){
//         int x, y; cin >> x >> y;
//         --x; --y;
//         cout << v[x][y] << "\n";
//     }
// }
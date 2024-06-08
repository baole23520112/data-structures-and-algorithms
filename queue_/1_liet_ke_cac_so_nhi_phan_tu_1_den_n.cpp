/**
 * Bai 1: Liet ke so nhi phan
 * Cho so tu nhien n, hay in ra tat ca cac so nhi phan tu 1 den n.
 * Input: gom so testcase va moi testcase la 1 so tu nhien n
 * Input 2 2 5
 * Ouput 1 10
 *      1 10 11 100 101
*/

/**
 *  Y tuong: luc dau day so 1 vao queue va ans, sau do pop ra giu lai roi noi tiep "1" va "0"
 *  roi luu lai kq va tiep tuc day vao queue, tiep tuc cho den khi ans du so luong la n
*/


// My way, but I think it's not effective with a big number of testcases
// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// int main(){
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     // #endif
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t; cin >> t;
//     while(t--){
//         queue<string> q;
//         int n; cin >> n;
//         vector<string> ans;
//         q.push("1");
//         ans.push_back("1");
//         while(ans.size() != n){
//             string temp = q.front();
//             q.pop();
//             ans.push_back(temp + "0");
//             q.push(temp + "0");
//             if (ans.size() == n) break;
//             ans.push_back(temp + "1");
//             q.push(temp + "1");
//         }
//         for (string x : ans){
//             cout << x << ' ';
//         }
//         cout << endl;
//     }
//     return 0;
// }

// effective way
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<string> res;
void init(){
    queue<string> q;
    q.push("1");
    res.push_back("1");
    while(res.size() <= 10000){
        string temp = q.front();
        q.pop();
        res.push_back(temp + "0");
        res.push_back(temp + "1");
        q.push(temp + "0");
        q.push(temp + "1");
    }
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
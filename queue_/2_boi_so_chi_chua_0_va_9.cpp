/**
 * Bai 2: boi so chi chua 0 va 9
 * Cho so tu nhien N, hay tim so nguyen duong X nho nhat duoc tao boi so 9 va so 0 chia het
 * cho N. Vi du voi N = 5 ta se tim ra X = 90
 * Input: dong dau tien la so testcase, tiep theo la cac so N
 * Input: 2 5 7
 * Output: 90
 *          9009
*/

// Y tuong: giong voi bai 1

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> res;
ll a[101];

void init(){
    queue<string> q;
    q.push("9");
    res.push_back(9);
    while(1){
        string temp = q.front();
        q.pop();
        if (temp.size() == 10) break;
        res.push_back(stoll(temp + "0"));
        res.push_back(stoll(temp + "9"));
        q.push(temp + "0");
        q.push(temp + "9");
    }
    for (int i = 1; i <= 100; i++){
        for (ll x : res){
            if (x % i == 0){
                a[i] = x;
                break;
            }
        }
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
        cout << a[n] << endl;
    }
    return 0;
}
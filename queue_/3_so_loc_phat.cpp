/**
 * Bai 3: so loc phat
 * Mot so duoc goi la so loc phat neu chi co 2 chu so 6 va 8, cho so tu nhien N, hay liet ke cac 
 * so loc phat khong qua N chu so
 * Input: dong dau tien la t testcase, t dong tiep theo la N
 * Input: 2 2 3
 * Output: 
 * 88 8 6 68 66 8 6
 * 888 886 868 866 688 686 668 666 88 86 68 66 8 6
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<string> res;
void init(){
    queue<string> q;
    q.push("6");
    q.push("8");
    res.push_back("6");
    res.push_back("8");
    while(1){
        string temp = q.front();
        q.pop();
        if (temp.size() == 15) break;
        res.push_back(temp + "6");
        res.push_back(temp + "8");
        q.push(temp + "6");
        q.push(temp + "8");
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
        vector<string> ans;
        for (string x : res){
            if (x.size() == n + 1) break;
            ans.push_back(x);
        }
        reverse(ans.begin(), ans.end());
        for (string x : ans){
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}
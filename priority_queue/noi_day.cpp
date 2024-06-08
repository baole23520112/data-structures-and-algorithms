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
    int t; cin >> t;
    while(t--){
        priority_queue<int, vector<int>, greater<int>> pq;
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            pq.push(x);
        }
        int sum = 0;
        while(pq.size() > 1){
            int temp1 = pq.top();
            pq.pop();
            int temp2 = pq.top();
            pq.pop();
            sum += temp1 + temp2;
            pq.push(temp1 + temp2);
        }
        cout << sum << endl;
    }
    return 0;
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
    int a[n], b[n];
    for (int &x : a) cin >> x;
    stack<int> st;
    int res = INT_MIN;
    int i = 0;
    while(i < n){
        if (st.empty() || a[i] >= a[st.top()]){
            st.push(i);
            i++;
        }
        else {
            int idx = st.top();
            st.pop();
            if (st.empty()){
                res = max(res, i * a[idx]);
            }
            else {
                res = max(res, a[idx] * (i - st.top() - 1));
            }
        }
    }
    while(!st.empty()){
        int idx = st.top();
        st.pop();
        if (st.empty()){
            res = max(res, i * a[idx]);
        }
        else {
            res = max(res, a[idx] * (i - st.top() - 1));
        }
    }
    cout << res;
    return 0;
}
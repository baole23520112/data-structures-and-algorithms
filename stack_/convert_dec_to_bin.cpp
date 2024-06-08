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
    stack<int> st;
    while(n){
        st.push(n % 2);
        n /= 2;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    return 0;
}
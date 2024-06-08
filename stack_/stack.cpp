#include <bits/stdc++.h>
#include <stack>
using namespace std;

using ll = long long;

// push()
// pop()
// top()
// size()
// empty()
// all is O(1)

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    if (st.empty()){
        cout << "EMPTY" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
#include <stack>
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
    string s;
    getline(cin, s);
    stack<string> st;
    stringstream ss(s);
    string word;
    while(ss >> word){
        st.push(word);
    }
    while(!st.empty()){
        cout << st.top() << ' ';
        st.pop();
    }
    return 0;
}
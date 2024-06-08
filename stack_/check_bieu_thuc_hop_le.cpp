#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// trong stack khong co dau dong ngoac
// empty -> hop le

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<char> st;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '('){
            st.push(s[i]);
            
        }
        else {
            if (st.empty()){
                cout << "Khong hop le";
                return 0;
            }
            else {
                st.pop();
            }
        }
    }
    if (st.empty()){
        cout << "hop le";
    }
    else 
        cout << "khong hop le";
    return 0;
}
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
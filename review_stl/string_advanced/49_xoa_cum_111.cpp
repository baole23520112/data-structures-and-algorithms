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
    string s; cin >> s;
    int leng = s.size(); // vì leng có thể thay đổi nên lưu lại 
    for (int i = 0; i < leng - 2; i++){
        if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1'){
            s.erase(i, 3);
            i--; // phần tử phía sau dồn lên trước nên xóa để xét tại chân
        }
    }
    if (s.size() != 0) cout << s;
    else cout << "EMPTY";
    return 0;
}
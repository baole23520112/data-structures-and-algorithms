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
        if (s[2] != '/'){
            s = "0" + s;
        }
        if (s[5] != '/'){
            s.insert(3, "0");
        }
        cout << s;
        return 0;
    }
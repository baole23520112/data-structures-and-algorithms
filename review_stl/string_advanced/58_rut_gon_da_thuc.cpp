#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int chuyen(string s){
    if (s.size() < 2) return s[0] - '0';
    return stoi(s);
}

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    cin.ignore();
    while(t--){
        map<int, int> a;
        string s;
        getline(cin, s);
        for (char &x : s){
            if (x == '+')
                x = ' ';
        }
        stringstream ss(s);
        string word;
        while(ss >> word){
            int pos = word.find("x^");
            int coso = chuyen(word.substr(0, pos));
            int somu = chuyen(word.substr(pos + 2));
            a[somu] += coso;
        }
        for (auto it = a.begin(); it != a.end(); it++){
            if (it != a.begin())
                cout << " + ";
            cout << it->second << "x^" << it->first;
        }
        cout << endl;
    }
    return 0;
}
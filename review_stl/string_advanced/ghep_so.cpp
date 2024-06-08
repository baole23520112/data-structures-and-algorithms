#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void chuanhoa(string &s){
    if (s[0] == '0'){
        int count = 1;
        for (int i = 1; i < s.size(); i++){
            if (s[i] == '0')
                count++;
            else break;
        }
        // trường hợp "000" -> "0" nếu mà cắt hết mà size() = 0 thì phải gán lại là "0"
        string temp = s.substr(count);
        if (temp.size() == 0) s = '0';
        else s = temp;
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
    vector<string> a;
    string s; cin >> s;
    for (char &x : s){
        if (isalpha(x))
            x = ' ';
    }
    stringstream ss(s);
    string word;
    while(ss >> word){
        chuanhoa(word);
        a.push_back(word);
    }
    sort(a.begin(), a.end(), [](string a, string b)->bool{
        string ab = a + b;
        string ba = b + a;
        return ab > ba;
    });
    for (string x : a){
        cout << x;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void chuanhoa(string &s){
    for (int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);
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
    string s;
    vector<string> v;
    getline(cin, s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); i++){
            word[i] = tolower(word[i]);
        }
        v.push_back(word);
    }
    chuanhoa(v[v.size() - 1]);
    for (int i = 0; i < v.size(); i++){
        cout << v[i];
        if (i == v.size() - 2)
            cout << ',';
        cout << ' ';
    }
    cout << endl;
    cout << v[v.size() - 1] << ", ";
    for (int i = 0; i < v.size() - 1; i++){
        cout << v[i] << ' ';
    }
    return 0;
}
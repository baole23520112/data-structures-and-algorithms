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
    string s; getline(cin, s);
    for (int i = 0; i < s.size(); i++){
        if (isupper(s[i])){
            s[i] += 32;
        }
    }
    stringstream ss(s);
    string word;
    int count = 0;
    while(ss >> word){
        if (word == "28tech"){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
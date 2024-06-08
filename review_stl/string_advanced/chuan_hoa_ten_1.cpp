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
    string ten;
    string day;
    vector<string> v;
    getline(cin, ten);
    stringstream ss(ten);
    string word;
    while(ss >> word){
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); i++){
            word[i] = tolower(word[i]);
        }
        v.push_back(word);
    }
    cin >> day;
    if (day[2] != '/'){
        day = "0" + day;
    }
    if (day[5] != '/'){
        day.insert(3, "0");
    }
    for (auto x : v){
        cout << x << ' ';
    }
    cout << endl;
    cout << day;
    return 0;
}
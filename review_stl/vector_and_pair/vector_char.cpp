#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<char> nhap(){
    char a;
    vector<char> temp;
    while(cin >> a){
        temp.push_back(a);
    }
    return temp;
}

vector<char> thaydoi(vector<char> v){
    vector<char> temp;
    for (int i = 0; i < v.size(); i++){
        if ('a' <= v[i] && v[i] <= 'z'){
            v[i] -= 32;
            temp.push_back(v[i]);
        }
        else if ('A' <= v[i] && v[i] <= 'Z'){
            v[i] += 32;
            temp.push_back(v[i]);
        }
        else {
            temp.push_back(v[i]);
        }
    }
    return temp;
}

void in(vector<char> v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);
}
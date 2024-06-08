#include <bits/stdc++.h>
#pragma GCC optimize ("03,unroll-loops")
#pragma GCC target ("avx2,bmi,bmi2")
using namespace std;
using ll = long long;
#define mod 1000000007
#define endl '\n'

// size();
// push_front();
// push_back();
// pop_front();
// pop_back();
// empty();
// front();
// back();

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    deque<int> d;
    d.push_front(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(1);
    cout << d.front() << endl;
    cout << d.back() << endl;
    return 0;
}
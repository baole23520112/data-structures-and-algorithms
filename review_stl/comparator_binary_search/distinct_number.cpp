#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a.insert(x);
    }
    cout << a.size();
    return 0;
}
//
//  chapter3.cpp
//  practice-algorithm
//
//  Created by 大西玲音 on 2021/06/18.
//

#include "include/bits/stdc++.h"
using namespace std;

int main() {
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    bool exist = false;
    for (int i = 0; i < N; i++) {
        if (a[i] == v) {
            exist = true;
        }
    }
    if (exist) cout << "YES" << endl;
    else cout << "NO" << endl;
}

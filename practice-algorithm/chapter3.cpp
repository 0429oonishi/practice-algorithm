//
//  chapter3.cpp
//  practice-algorithm
//
//  Created by 大西玲音 on 2021/06/18.
//

#include "include/bits/stdc++.h"
using namespace std;

int main() {
    // 入力
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    bool exist = false;
    for (int bit = 0; bit < (1 << N); bit++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            // i番目の要素a[i]に部分集合が含まれているかどうか
            if (bit & (1 << i)) {
                sum += a[i];
            }
        }
        
        if (sum == W) exist = true;
    }
    
    // 出力
    if (exist) cout << "YES" << endl;
    else cout << "NO" << endl;
}


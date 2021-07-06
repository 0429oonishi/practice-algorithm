//
//  chapter3.cpp
//  practice-algorithm
//
//  Created by 大西玲音 on 2021/06/18.
//

#include "include/bits/stdc++.h"
using namespace std;

const int INF = 100000;
int main() {
    // 入力
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }
    
    // 探索
    int min_value = INF;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (a[i] + b[j] < K) {
                continue;
            }
            if (a[i] + b[j] < min_value) {
                min_value = a[i] + b[j];
            }
        }
    }
    
    // 出力
    cout << min_value << endl;
}


//
//  chapter3.cpp
//  practice-algorithm
//
//  Created by 大西玲音 on 2021/06/18.
//

#include "include/bits/stdc++.h"
using namespace std;

const int INF = 200000000;
int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    int min_value = INF;
    for (int i = 0; i < N; i++) {
        if (a[i] < min_value) min_value = a[i];
    }
    cout << min_value << endl;
}

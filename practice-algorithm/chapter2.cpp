//
//  chapter2.cpp
//  practice-algorithm
//
//  Created by 大西玲音 on 2021/06/17.
//

#include "include/bits/stdc++.h"
using namespace std;

double calc_dist(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    int N; cin >> N;
    vector<double> x(N), y(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    double min_dist = 10000000.0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            double dist_i_j = calc_dist(x[i], y[i], x[j], y[j]);
            if (dist_i_j < min_dist) {
                min_dist = dist_i_j;
            }
        }
    }
    cout << min_dist << endl;
}

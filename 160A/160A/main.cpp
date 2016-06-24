//
//  main.cpp
//  160A
//
//  Created by Dmitry Fa[n]tastik on 25/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, t;
    vector<short> v;

    cin >> n;

    while (n--) {
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    int part = 0;


    for (auto & val : v) {
        sum += val;
    }

    int cnt = 0;
    for (auto it = v.rbegin(); it < v.rend(); it++) {
        cnt++;
        part += *it;
        if (part > (sum - part)) {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}

//
//  main.cpp
//  158B
//
//  Created by Dmitry Fa[n]tastik on 24/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    vector<int> v(4);

    cin >> n;

    int tmp;
    while (n--) {
        cin >> tmp;
        v[--tmp]++;
    }

    int cnt = 0;
    cnt += v[3];

    cnt += v[2];
    if (v[0] <= v[2]) {
        v[0] = 0;
    } else {
        v[0] -= v[2];
    }

    cnt += ceil(v[1] / 2.0);
    if (v[1] % 2 == 1) {
        v[0] = max(0, v[0] - 2);
    }

    cnt += v[0] / 4;
    if (v[0] % 4 != 0) {
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}

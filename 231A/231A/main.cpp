//
//  main.cpp
//  231A
//
//  Created by Dmitry Fa[n]tastik on 24/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int q1, q2, q3;

    int cnt = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> q1 >> q2 >> q3;
        if ((q1 + q2 + q3) >= 2) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

//
//  main.cpp
//  697A
//
//  Created by Dmitry Fa[n]tastik on 14/07/2016.
//  Copyright © 2016 Fa[n]tastik Solutions. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    unsigned long long t, s, x;

    cin >> t >> s >> x;

    if (t == x) {
        cout << "YES" << endl;
        return 0;
    }
    if (t > x || (t += s) > x) {
        cout << "NO" << endl;
        return 0;
    }
    x -= t;
    if (x % s == 0 || x % s == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

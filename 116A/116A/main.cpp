//
//  main.cpp
//  116A
//
//  Created by Dmitry Fa[n]tastik on 24/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int a, b;

    int cur = 0;
    int mn = 0;

    cin >> n;

    while (n--) {
        cin >> a >> b;
        cur = cur - a + b;
        mn = max(mn, cur);
    }

    cout << mn << endl;

    return 0;
}

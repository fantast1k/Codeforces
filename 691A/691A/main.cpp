//
//  main.cpp
//  691A
//
//  Created by Dmitry Fa[n]tastik on 14/07/2016.
//  Copyright © 2016 Fa[n]tastik Solutions. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 0;
    int m = 0;

    freopen("in", "r", stdin);

    cin >> n;

    int tmp = 0;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == 0) {
            m++;
        }
        if (m > 2) {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (n == 1) {
        cout << ((m == 0) ? "YES" : "NO") << endl;
    }
    else {
        cout << ((m == 1) ? "YES" : "NO") << endl;
    }
    
    return 0;
}

//
//  main.cpp
//  158A
//
//  Created by Dmitry Fa[n]tastik on 23/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, k, a, b;
    cin >> n >> k;

    n -= k;

    int cnt = 0;

    do {
        cin >> a;
    } while (a && ++cnt && --k);

    do {
        cin >> b;
    } while (b && b == a && ++cnt && --n);

    cout << cnt << endl;

    return 0;
}

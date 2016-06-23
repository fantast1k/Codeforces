//
//  main.cpp
//  1A
//
//  Created by Dmitry Fa[n]tastik on 23/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int32_t n, m, a;

    cin >> n >> m >> a;

    unsigned long long rows = ceil(n / (double)a);
    unsigned long long columns = ceil(m / (double) a);
    unsigned long long count = rows * columns;

    cout << count << endl;

    return 0;
}

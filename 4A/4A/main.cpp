//
//  main.cpp
//  4A
//
//  Created by Dmitry Fa[n]tastik on 23/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int w;
    cin >> w;
    cout << ((w % 2 == 0 && w != 2) ? "YES" : "NO") << endl;
    return 0;
}

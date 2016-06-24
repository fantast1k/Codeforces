//
//  main.cpp
//  96A
//
//  Created by Dmitry Fa[n]tastik on 24/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;

    bool d = s.find("1111111") != string::npos || s.find("0000000") != string::npos;

    cout << (d ? "YES" : "NO") << endl;

    return 0;
}

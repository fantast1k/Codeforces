//
//  main.cpp
//  133A
//
//  Created by Dmitry Fa[n]tastik on 25/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;

    cin >> s;

    bool c =
    (s.find("H") != string::npos) ||
    (s.find("Q") != string::npos) ||
    (s.find("9") != string::npos);

    cout << (c ? "YES" : "NO") << endl;

    return 0;
}

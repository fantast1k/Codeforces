//
//  main.cpp
//  282A
//
//  Created by Dmitry Fa[n]tastik on 24/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, x = 0;
    string s;

    cin >> n;

    while (n--) {
        cin >> s;
        if (s.find("--") != string::npos) {
            x--;
        }
        else if (s.find("++") != string::npos) {
            x++;
        }
    }

    cout << x << endl;

    return 0;
}

//
//  main.cpp
//  131A
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

    bool normal = false;
    for (auto it = s.begin()+1; it < s.end(); it++) {
        if (*it >= 'a' && *it <= 'z') {
            normal = true;
            break;
        }
    }

    int dif = 'A' - 'a';
    if (!normal) {
        for (auto &ch : s) {
            if (ch >= 'A' && ch <= 'Z') {
                ch -= dif;
            }
            else if (ch >= 'a' && ch <= 'z') {
                ch += dif;
            }
        }
    }

    cout << s << endl;

    return 0;
}

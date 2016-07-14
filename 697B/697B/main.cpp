//
//  main.cpp
//  697B
//
//  Created by Dmitry Fa[n]tastik on 14/07/2016.
//  Copyright © 2016 Fa[n]tastik Solutions. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    size_t b = 0;
    string s;

    cin >> s;

    size_t expPos = s.find('e') + 1;
    b = std::stoi(s.substr(expPos, s.size() - expPos));

    s.erase(s.begin() + expPos - 1, s.end());

    size_t dot = s.find('.');

    size_t toMove = min((size_t)b, s.size() - dot - 1);
    s.erase(s.begin() + dot, s.begin() + dot + 1);
    s.insert(dot + toMove, ".");

    if (toMove == (s.size() - dot - 1)) {
        s.erase(s.end() - 1, s.end());
        if (b > toMove) {
            s.insert(s.size(), b - toMove, '0');
        }
    }

    cout << s << endl;
    
    return 0;
}

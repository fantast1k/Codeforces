//
//  main.cpp
//  692B
//
//  Created by Dmitry Fa[n]tastik on 14/07/2016.
//  Copyright © 2016 Fa[n]tastik Solutions. All rights reserved.
//

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    set<char> same{'A', 'H', 'I', 'M', 'O', 'o', 'T', 'U', 'V', 'v', 'W', 'w', 'X', 'x', 'Y'};
    string s;

    cin >> s;

    for (int i = 0, end = s.size() / 2; i < end; i++) {
        char a = s.at(i);
        char b = s.at(s.size() - i - 1);

        if ((a == 'b' && b == 'd') ||
            (a == 'd' && b == 'b')) {
            continue;
        }
        if ((a == 'p' && b == 'q') ||
            (a == 'q' && b == 'p')) {
            continue;
        }


        if (a == b && same.find(a) != same.end()) {
            continue;
        }

        cout << "NIE" << endl;
        return 0;
    }

    if (s.size() % 2) {
        char a = s.at(s.size() / 2);
        cout << ((same.find(a) != same.end()) ? "TAK" : "NIE") << endl;
    } else {
        cout << "TAK" << endl;
    }
    
    
    return 0;
}

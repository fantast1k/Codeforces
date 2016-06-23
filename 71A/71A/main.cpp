//
//  main.cpp
//  71A
//
//  Created by Dmitry Fa[n]tastik on 23/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;

    string s;
    while (n--) {
        cin >> s;
        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << *(s.end()-1) << endl;
        }
        else {
            cout << s << endl;
        }
    }

    return 0;
}

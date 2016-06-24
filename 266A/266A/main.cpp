//
//  main.cpp
//  266A
//
//  Created by Dmitry Fa[n]tastik on 25/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    string s;

    int cnt = 0;

    cin >> n >> s;

    char last = '0';
    for (auto &ch : s) {
        if (last != ch) {
            last = ch;
        }
        else {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

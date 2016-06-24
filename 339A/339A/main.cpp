//
//  main.cpp
//  339A
//
//  Created by Dmitry Fa[n]tastik on 25/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    vector<short> v;

    cin >> s;

    for (auto &ch : s) {
        if (ch != '+') {
            v.push_back(ch -= '0');
        }
    }

    sort(v.begin(), v.end());

    auto it = v.begin();
    cout << *it++;

    for (; it != v.end(); it++) {
        cout << "+" << *it;
    }
    cout << endl;

    return 0;
}

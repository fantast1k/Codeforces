//
//  main.cpp
//  112A
//
//  Created by Dmitry Fa[n]tastik on 24/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string s1;
    string s2;

    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int val = s1.compare(s2);
    if (val > 0)
        val = 1;
    else if (val < 0)
        val = -1;

    cout << val << endl;

    return 0;
}

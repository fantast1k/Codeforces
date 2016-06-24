//
//  main.cpp
//  281A
//
//  Created by Dmitry Fa[n]tastik on 25/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    char c;

    cin >> c;
    cin >> s;

    if (c < 'A' || c > 'Z') {
        c += ('A' - 'a');
    }

    cout << c;
    cout << s << endl;

    return 0;
}

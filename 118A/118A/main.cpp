//
//  main.cpp
//  118A
//
//  Created by Dmitry Fa[n]tastik on 23/06/2016.
//  Copyright © 2016 Fantastik. All rights reserved.
//

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(int argc, const char * argv[]) {
    string str;
    string newStr;
    set<char> vowels{'A', 'O', 'Y', 'E', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i'};
    char buf[3] = {'.', 0, 0};

    cin >> str;

    int addition = 'a' - 'A';

    for (auto ch : str) {
        if (vowels.find(ch) == vowels.end()) {
            if (ch <= 'a')
                ch += addition;
            buf[1] = ch;
            newStr.append(string(buf));
        }
    }

    cout << newStr << endl;
    return 0;
}

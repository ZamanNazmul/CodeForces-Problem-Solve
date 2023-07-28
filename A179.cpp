#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main () {

    string s;
    string p1 = ("s");
    string p2 = ("es");

    cin >> s;

    s.length();

    if (s[s.length()-1] == 's'){
        s.append(p2);
    }

    else{
        s.append(p1);
    }

    cout << s;

    return 0;
}

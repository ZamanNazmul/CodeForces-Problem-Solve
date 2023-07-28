#include <bits/stdc++.h>
using namespace std;
#define lop1(i,n) for(int i = 0 ; i<s.size() ; i++)

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        char sym = '0';

        lop1(i,n)
        {
            if (s[i] == '?')
                s[i] = sym;
            else
                sym = s[i];
        }

        cout << s <<endl;
    }

    return 0;
}

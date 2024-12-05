#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin >> s;

    if (s >= 'A' && s <= 'Z') // fast think is s='a'; but s<'a' && s>'z';
    {
        cout << "ALPHA"

             << endl
             << "IS CAPITAL";
    }
    else if (s >= 'a' && s <= 'z')
    {
        cout << "ALPHA"

             << endl
             << "IS SMALL";
    }
    else
    {
        cout << "IS DIGIT";
    }

    return 0;
}
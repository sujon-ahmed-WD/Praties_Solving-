#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char m, s;

    cin >> a >> m >> b >> s >> c;

    if (m == '+') // compyaer Problem in m='+'
    {
        if (a + b == c)
        {
            cout << "Yes"; // output dont same
        }
        else
        {
            cout << a + b; // no use nh only anser 
        }
    }
    else if (m == '-')
    {
        if (a - b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b ;
        }
    }
    else if (m == '*')
    {
        if (a * b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }

    return 0;
}
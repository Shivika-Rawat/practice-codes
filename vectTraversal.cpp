#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{10, 5, 20};
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << endl;
    // or
    for (int &x : v)
    { // change the ele and put 6 for every ele
        x = 6;
        for (int x : v)
            cout << x << " ";
    }
    cout << endl;
    cout << endl;

    for (int x : v)
    { // just copy of ele
        x = 6;
        for (int x : v)
            cout << x << " ";
    }

    return 0;
}
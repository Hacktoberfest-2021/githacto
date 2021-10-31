#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int *p, *q;
    p = new int[5];
    q = new int[10];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    cout << "The element of p is " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    cout << "The element of p is now " << endl;

    for (int i = 0; i < 10; i++)
    {
        q[i] = p[i];
    }
    delete[] p;
    p = q;
    q = NULL; // or q = nullptr;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    return 0;
}

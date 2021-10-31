#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char name[10] = {'A', 'B', 'C', 'D', '\0'};
    char name1[10] = {'D', 101, 101, 112};
    char name2[10] = {'A', 114, 105, 110, 100, 97, 109};
    int size = sizeof(name) / sizeof(name[0]);
    int size1 = sizeof(name1) / sizeof(name1[0]);
    int size2 = sizeof(name2) / sizeof(name2[0]);
    for (int i = 0; i < size; i++)
    {
        cout << name[i];
    }
    cout << endl;

    for (int i = 0; i < size1; i++)
    {
        cout << name1[i];
    }
    cout << endl;

    for (int i = 0; i < size2; i++)
    {
        cout << name2[i];
    }
    cout << endl;

    return 0;
}

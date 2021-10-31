#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string name;
    cout << "Enter a name" << endl;
    getline(cin, name);

    int len = sizeof(name) / sizeof(name[0]);
    int i, j;
    int h[123] = {0};

    for (i = 0; name[i] != '\0'; i++)
    {
        h[name[i]]++;
    }
    for (i = 0; i < 123; i++)
    {
        if (h[i] > 1)
        {
            cout << "the repeated element is " << (char)(i) << " " << h[i] << " times" << endl;
        }
    }

    return 0;
}

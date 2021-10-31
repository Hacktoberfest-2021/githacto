#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char name[] = "deeppjj";
    int len = sizeof(name) / sizeof(name[0]);
    int i, j;
    for (i = 0; i <= len; i++)
    {
        for (j = i + 1; j <= len; j++)
        {
            if (name[i] == name[j])
            {
                cout << "the repeated element is " << name[i] << endl;
            }
        }
    }

    return 0;
}

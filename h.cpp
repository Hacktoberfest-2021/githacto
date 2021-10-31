#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s[] = "Welcome";
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] + 32;
    }

    cout << s << endl;

    return 0;
}

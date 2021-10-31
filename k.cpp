#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char A[] = "ddeepa";
    long int h = 0, x = 0;
    int i;
    for (i = 0; A[i] != '\0'; i++)
    {
        x = 1;
        x = x << (A[i] - 97);
        if ((x & h) > 0)
        {
            cout << "The Duplicate element is " << A[i] << endl;
        }
        else
        {
            h = (h | x);
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char A[] = "deep";
    char B[] = "peed";
    int as1 = sizeof(A) / sizeof(A[0]);
    int as2 = sizeof(B) / sizeof(B[0]);
    int h[128] = {0}, i, j;
    bool flag = false;
    if (as1 != as2)
    {
        cout << "This are not Anagrams" << endl;
    }
    else
    {
        for (i = 0; A[i] != '\0'; i++)
        {                 // a b c d e
            flag = false; // a c b d e
            for (j = 0; B[j] != '\0'; j++)
            {
                if (A[i] == B[j])
                {
                    flag = true;
                }
            }
            if (flag == false)
            {
                cout << "This are not Anagrams" << endl;
                break;
            }
        }
        if (A[i] == '\0')
        {
            cout << "This are Anagrams" << endl;
        }
    }
    return 0;
}

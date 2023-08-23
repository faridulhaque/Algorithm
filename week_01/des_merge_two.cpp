#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int nums[N];

int main()
{
    int ls;
    cin >> ls;

    int L[ls];

    for (int i = 0; i < ls; i++)
    {
        cin >> L[i];
    }

    int rs;
    cin >> rs;

    int R[rs];

    for (int i = 0; i < rs; i++)
    {
        cin >> R[i];
    }

    int i = 0, j = 0, n = 0;

    while (n != ls + rs)
    {
        if (i < ls && (j >= rs || L[i] > R[j])) 
        {
            nums[n] = L[i];
            i++;
        }
        else
        {
            nums[n] = R[j];
            j++;
        }
        n++; 
    }

    for (int i = 0; i < ls + rs; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}

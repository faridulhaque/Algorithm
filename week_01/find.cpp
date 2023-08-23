#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int nums[N];

bool find_one(int l, int r, int k)
{
    
    if(l == r) return false;

    if (nums[l] == k || nums[r] == k)
        return true;

    int mid = (l + r) / 2;

    return find_one(l, mid, k) || find_one(mid + 1, r, k);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    bool found = find_one(0, n - 1, k);

    if (found)
        cout << k;
    else
        cout << "Not Found";

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int nums[N];

bool find_clone(int l, int r, int k, int k_item)
{
    

    
    if(k_item > 1) return true;
    if(l == r) return false;

    if (nums[l] == k || nums[r] == k)
        k_item++;

    int mid = (l + r) / 2;

    return find_clone(l, mid, k, k_item) || find_clone(mid + 1, r, k, k_item);
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

    int k_item = 0;
    

    bool found = find_clone(0, n - 1, k, k_item);

    if (found)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

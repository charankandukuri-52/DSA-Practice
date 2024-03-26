#include <bits/stdc++.h>
using namespace std;
void fn()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, v[i]);
    }
    cout << maxi << endl;
}
int main()
{
    fn();
    return 0;
}
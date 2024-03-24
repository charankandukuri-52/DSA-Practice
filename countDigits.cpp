#include <bits/stdc++.h>
using namespace std;
void fn()
{
    int n;
    cin >> n;
    int nDigits = log10(n) + 1;
    vector<int> digits;
    unordered_map<int, int> mp;
    int p = n;
    while (p > 0)
    {

        if (p % 10 != 0)
            mp[p % 10]++;
        p /= 10;
    }
    int cnt = 0;

    for (auto i = begin(mp); i != end(mp); i++)
    {
        if (n % i->first == 0 && i->first != 0)
        {
            cnt += i->second;
        }
    }

    cout << cnt << endl;
}
int main()
{
    fn();
    return 0;
}
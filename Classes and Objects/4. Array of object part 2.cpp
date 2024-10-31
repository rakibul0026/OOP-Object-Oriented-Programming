#include <iostream>
#include <cmath>
using namespace std;

int longestGoodArrayLength(int l, int r)
{
    long long range_length = r - l;


    int k = (int)floor(sqrt(2 * range_length + 0.25) - 0.5);


    while ((k * (k + 1)) / 2 > range_length + 1)
    {
        k--;
    }

    return k + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        cout << longestGoodArrayLength(l, r) << endl;
    }
    return 0;
}


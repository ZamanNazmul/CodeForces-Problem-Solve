#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int num_tests;
    cin >> num_tests;

    while (num_tests--)
    {
        int n;
        cin >> n;

        ll arr[n], sorted_arr[n];
        ll i = 0;
        while (i < n)
        {
            cin >> arr[i];
            sorted_arr[i] = arr[i];
            i++;
        }

        sort(sorted_arr, sorted_arr + n);

        bool found_diff = false;
        i = 0;
        while (i < n)
        {
            if (arr[i] != sorted_arr[i])
            {
                cout << 0 << endl;
                found_diff = true;
                break;
            }
            i++;
        }

        if (!found_diff)
        {
            ll min_diff = INT_MAX;
            ll ind;
            i = 0;
            while (i < n - 1)
            {
                if (arr[i + 1] - arr[i] < min_diff)
                {
                    min_diff = arr[i + 1] - arr[i];
                    ind = i;
                }
                i++;
            }

            ll ans;
            ans = (arr[ind + 1] - arr[ind]) / 2 + 1;
            cout << ans << endl;
        }
    }
    return 0;
}

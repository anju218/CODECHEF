#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long arr[100000];
        int i;
        for(i=0;i<n;i++) 
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        long long x = arr[0];
        long long y = arr[1];
        long long z = arr[n - 1];
        long long ans = abs(x - y) + abs(y - z) + abs(z - x);
        y = arr[0];
        ans = max(ans , abs(x - y) + abs(y - z) + abs(z - x));
        x = arr[1];
        y = arr[1];
        ans = max(ans , abs(x - y) + abs(y - z) + abs(z - x));
        cout << ans << endl;
    }
  
    
	
	return 0;
}

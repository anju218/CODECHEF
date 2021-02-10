/*You are given a sequence A1,A2,…,AN. Find the maximum value of the expression |Ax−Ay|+|Ay−Az|+|Az−Ax| over all triples of pairwise distinct valid indices (x,y,z).
Example Input

3
3
2 7 5
3
3 3 3
5
2 2 2 2 5

Example Output

10
0
6

Explanation

Example case 1: The value of the expression is always 10
. For example, let x=1, y=2 and z=3, then it is |2−7|+|7−5|+|5−2|=5+2+3=10.
*/

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

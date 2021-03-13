
/*Space Arrays Problem Code: SPACEARR
Submit
Read problem statements in Bengali, Mandarin Chinese, Russian, and Vietnamese as well.

Finally, progress reached the Madoka family and she decided to play with her little sister in the sensational game Space Arrays.

The rules of the game are as follows:

    Initially, a sequence a1,a2,…,aN

is given.
The players alternate turns.
In each turn, the current player must choose an index i
and increment ai, i.e. change ai to ai+1
.
Afterwards, if there is no permutation p1,p2,…,pN
of the integers 1 through N such that ai≤pi holds for each valid i
, the current player loses.
Otherwise, the game continues with the next turn.
Example Input

4
4
1 2 3 3
4
1 1 3 3
5
1 2 2 1 5
3
2 2 3

Example Output

First
Second
Second
Second

Explanation

Example case 1:

    If the first player increases the fourth element, the resulting sequence is (1,2,3,4)

. The second player loses after increasing any of the elements.
If the first player increases the second element, the resulting sequence is (1,3,3,3)
, and he loses because there is no valid permutation. For example if p=(2,1,4,3), the second element of a is greater than the second element of p.*/

#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    int t;
    cin>>t;
    while(t>0)
    {
        int n,c=0,i,flag=0,s;
        vector<int> v;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            if(v[i]>i+1)
            {
                cout<<"Second"<<endl;
                flag=1;
                break;
            }
            else
            {
                c+=i+1-v[i];
            }
        }
        if(flag==0)
        {
            if(c&1)
            {
                cout<<"First"<<endl;
            }
            else
            {
                cout<<"Second"<<endl;
            }
        }
        t--;
    }
    
	
	return 0;
}

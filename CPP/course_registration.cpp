// Problem Code: COURSEREG
// Contest Code: START32


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    
    while(x--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(n<=m && k+n<=m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;

}
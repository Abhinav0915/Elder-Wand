//Problem Code: AMR15A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    int counnter_even=0;
    int counter_odd=0;
    cin >> x;
    while(x--)
    {
        cin >>y;
        if(y%2==0)
        {
            counnter_even = counnter_even+1;
            //cout << y;
            
        }
        else
        {
            counter_odd = counter_odd+1;
            //cout <<y<<"odd";
        }
    }
    if(counnter_even>counter_odd)
        {
            cout<<"READY FOR BATTLE";
        
        }
    else if (counnter_even<=counter_odd)
        {
            cout<<"NOT READY";
        }
        return 0;
}





// Problem Code: PASSORFAIL
// Contest Code: START16

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,p;
        cin>>n>>x>>p;
        int nans = n-x;
        int ans = x;
        if(ans*3+nans*-1 >=p)
            cout<<"PASS"<<endl;
        else
            cout<<"FAIL"<<endl;
    }
}

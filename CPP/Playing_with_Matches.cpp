#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin >> a,b;
        int sum = a+b;
        int arr[100];
        for (int i=0;i>=0;i--)
        {
            arr[i] = sum%10;
        }
        sum = sum/10;
        
    }
}
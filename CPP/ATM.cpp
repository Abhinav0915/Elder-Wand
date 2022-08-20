//Problem - ATM 
//Problem Code: S08TEST

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    float y;
    cin>>x;
    cin>>y;

    if(x%5==0 && x+0.5<=y)
    {
            float amt=(y-x)-0.5;
            printf("%.2lf",amt);
    }
    else
    {
        printf("%.2lf",y);
    }
    return 0;
}
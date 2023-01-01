#include <bits/stdc++.h>
using namespace std;

void answer()
{
    int t, count;
    string s;
    
    cin >> t >> s;
    count = 0;
    for(int i=0;i<t;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count = 0;
            continue;
        }
        else
        {
            count ++;
            if(count == 4)
            {
                break;
            }
        }
    }
    
    if(count < 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        answer();
    }
    return 0;
}

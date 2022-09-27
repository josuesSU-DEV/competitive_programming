#include<iostream>
using namespace std;
int main()
{
    int t, n, speed, max, i, j;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            max=0;
            cin>>n;
            for(j=1;j<=n;j++)
            {
                cin>> speed;
                if(speed>max)
                    max=speed;
            }
            cout<<"Case "<<i<<": "<<max;
        }
    }
    return 0;
}
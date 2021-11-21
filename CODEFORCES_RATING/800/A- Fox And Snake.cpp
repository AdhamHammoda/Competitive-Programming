#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , Equation
/// 7-6-2021 , 8:55 am
void test_case()
{
    ll n,m;
    cin>>n>>m;
    bool c=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2)
            {
                if(!j && i%4==3)
                {
                    cout<<"#";
                }
                else if(j==m-1 && i%4==1)
                {
                    cout<<"#";
                }
                else cout<<".";
            }
            else cout<<"#";
        }
        cout<<endl;
    }
}
int main()
{
    FIO
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}

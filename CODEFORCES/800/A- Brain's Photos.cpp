#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-3-2021 , 8:25 pm
void test_case()
{
    ll n,m;
    cin>>n>>m;
    bool black=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char a;
            cin>>a;
            if(a=='C' || a=='Y' || a=='M')black=false;
        }
    }
    black?cout<<"#Black&White":cout<<"#Color";
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

#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-24-2021 , 1:10 pm
ll ncr[101][101];
ll n,r;
void pascal()
{
    for(int i=0;i<101;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i && j)ncr[i][j]=ncr[i-1][j-1]+ncr[i-1][j];
            else ncr[i][j]=1;
//            cout<<ncr[i][j]<<" ";
        }
//        cout<<endl;
    }
}
void test_case()
{
    cout<<n<<" things taken "<<r<<" at a time is "<<ncr[n][r]<<" exactly."<<endl;
}
int main()
{
    FIO
    pascal();
//    ll t;
//    cin>>t;
//    t=1;
    while(cin>>n>>r)
    {
        if(!n && !r)break;
        test_case();
    }
}

#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation
/// 7-2-2021 , 4:14 PM
void test_case()
{
    string a,b;
    cin>>a>>b;
    ll j=0;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]==a[j])
        {
            j++;
        }
    }
    cout<<j+1;
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

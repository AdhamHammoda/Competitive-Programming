#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
ll t;
void test_case()
{
   ll a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<(a / b) - ( (d / b) - (c / b) + (c%b==0) )<<endl;
}
int main()
{
    FIO
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}
 
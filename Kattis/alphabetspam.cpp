#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    long double c1=0.0,c2=0.0,c3=0.0,c4=0.0;
    for(auto x:s)
    {
        if(x=='_')c1++;
        else if(x>='a' && x<='z')c2++;
        else if(x>='A' && x<='Z')c3++;
        else c4++;
    }
    long double sz=s.size();
    cout<<fixed<<setprecision(10)<<c1/sz<<endl<<c2/sz<<endl<<c3/sz<<endl<<c4/sz<<endl;
}
int main()
{
    FIO
    ll t;
//  freopen("input.in","rt",stdin);
//  freopen("output.txt","wt",stdout);
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}

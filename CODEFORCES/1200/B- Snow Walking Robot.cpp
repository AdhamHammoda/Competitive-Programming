#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    ll r=0,l=0,u=0,d=0;
    for(auto x:s)
    {
        r+=x=='R';
        l+=x=='L';
        u+=x=='U';
        d+=x=='D';
    }
    ll mn1=min(r,l);
    ll mn2=min(d,u);
    if(mn2==0 && mn1>=2)
    {
        cout<<2<<endl<<"LR"<<endl;
        return;
    }
    if(mn1==0 && mn2>=2)
    {
        cout<<2<<endl<<"UD"<<endl;
        return;
    }
    cout<<s.size()-((r-mn1)+(l-mn1)+(u-mn2)+(d-mn2))<<endl;
    for(int i=0;i<mn1;i++)cout<<"R";
    for(int i=0;i<mn2;i++)cout<<"U";
    for(int i=0;i<mn1;i++)cout<<"L";
    for(int i=0;i<mn2;i++)cout<<"D";
    cout<<endl;
}
int main()
{
    FIO
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        test_case();
    }
}

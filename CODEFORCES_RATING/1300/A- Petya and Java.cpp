#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef long double ld;
using namespace std;
void test_case()
{
    string s;
    cin>>s;
    string arr[]={"127","32767","2147483647","9223372036854775807"};
    if(s.size()<3)cout<<"byte",exit(0);
    if(s.size()==3)
    {
        for(int i=0;i<arr[0].size();i++)
        {
            if(s[i]<arr[0][i])cout<<"byte",exit(0);
            if(s[i]>arr[0][i])cout<<"short",exit(0);
        }
        cout<<"byte",exit(0);
    }
    if(s.size()<5)cout<<"short",exit(0);
    if(s.size()==5)
    {
        for(int i=0;i<arr[1].size();i++)
        {
            if(s[i]<arr[1][i])cout<<"short",exit(0);
            if(s[i]>arr[1][i])cout<<"int",exit(0);
        }
        cout<<"short",exit(0);
    }
    if(s.size()<10)cout<<"int",exit(0);
    if(s.size()==10)
    {
        for(int i=0;i<arr[2].size();i++)
        {
            if(s[i]<arr[2][i])cout<<"int",exit(0);
            if(s[i]>arr[2][i])cout<<"long",exit(0);
        }
        cout<<"int",exit(0);
    }
    if(s.size()<19)cout<<"long",exit(0);
    if(s.size()==19)
    {
        for(int i=0;i<arr[3].size();i++)
        {
            if(s[i]<arr[3][i])cout<<"long",exit(0);
            else if(s[i]>arr[3][i])cout<<"BigInteger",exit(0);
        }
        cout<<"long",exit(0);
    }
    cout<<"BigInteger";
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
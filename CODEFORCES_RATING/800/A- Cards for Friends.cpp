#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long h,w,n;
    cin>>h>>w>>n;
    if(h%2 && w%2 && n==1){cout<<"YES"<<endl;continue;}
    long long c=1;
    while(h%2==0 || w%2==0)
    {
        if(h%2==0)
        {
            h/=2;
            c*=2;
        }
        else if(w%2==0)
        {
            w/=2;
            c*=2;
        }
    }
    if(n>c)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
}
 
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    if(n==1 && m==1)cout<<0<<endl<<"1 1";
    else if(n==1 && m==2)cout<<0<<endl<<"1 1\n1 2\n1 1\n";
    else if(n==2 && m==1)cout<<"0"<<endl<<"1 1\n2 1\n1 1\n";
    else if(n==2 && m==2)cout<<"0"<<endl<<"1 1\n1 2\n2 2\n2 1\n1 1\n";
    else if(n==2)
    {
        cout<<0<<endl;
        for(int i=1;i<=m;i++)cout<<1<<" "<<i<<endl;
        for(int i=m;i>=1;i--)cout<<2<<" "<<i<<endl;
        cout<<1<<" "<<1;
    }
    else if(m==2)
    {
        cout<<0<<endl;
        for(int i=1;i<=n;i++)cout<<i<<" "<<1<<endl;
        for(int i=n;i>=1;i--)cout<<i<<" "<<2<<endl;
        cout<<1<<" "<<1;
    }
    else if(n==1)
    {
        cout<<1<<endl<<1<<" "<<m<<" "<<1<<" "<<1<<endl;
        for(int j=1;j<=m;j++)cout<<1<<" "<<j<<endl;
        cout<<1<<" "<<1;
    }
    else if(m==1)
    {
        cout<<1<<endl<<n<<" "<<1<<" "<<1<<" "<<1<<endl;
        for(int i=1;i<=n;i++)cout<<i<<" "<<1<<endl;
        cout<<1<<" "<<1;
    }
    else
    {
        if((n%2==0 && m%2==0))
        {
            cout<<0<<endl;
            for(int i=1;i<=n;i++)
            {
                if(i%2)
                {
                    for(int j=1;j<=m;j++)
                    {
                        if(i>1 && j==1)continue;
                        cout<<i<<" "<<j<<endl;
                    }
                }
                else
                {
                    for(int j=m;j>=1;j--)
                    {
                        if(i>1 && j==1)continue;
                        cout<<i<<" "<<j<<endl;
                    }
                }
            }
            for(int i=n;i>=1;i--)cout<<i<<" "<<1<<endl;
        }
        else if(n%2 && m%2)
        {
            cout<<1<<endl;
            cout<<n<<" "<<m<<" "<<1<<" "<<1<<endl;
            for(int i=1;i<=n;i++)
            {
                if(i%2)for(int j=1;j<=m;j++)cout<<i<<" "<<j<<endl;
                else for(int j=m;j>=1;j--)cout<<i<<" "<<j<<endl;
            }
            cout<<1<<" "<<1<<endl;
        }
        else if(n%2 && m%2==0)
        {
            cout<<0<<endl;
            for(int j=1;j<=m;j++)
            {
                if(j%2)
                {
                    for(int i=1;i<=n;i++)
                    {
                        if(j>1 && i==1)continue;
                        cout<<i<<" "<<j<<endl;
                    }
                }
                else
                {
                    for(int i=n;i>=1;i--)
                    {
                        if(j>1 && i==1)continue;
                        cout<<i<<" "<<j<<endl;
                    }
                }
            }
            for(int j=m;j>=1;j--)cout<<1<<" "<<j<<endl;
        }
        else
        {
            cout<<0<<endl;
            for(int i=1;i<=n;i++)
            {
                if(i%2)
                {
                    for(int j=1;j<=m;j++)
                    {
                        if(i>1 && j==1)continue;
                        cout<<i<<" "<<j<<endl;
                    }
                }
                else
                {
                    for(int j=m;j>=1;j--)
                    {
                        if(i>1 && j==1)continue;
                        cout<<i<<" "<<j<<endl;
                    }
                }
            }
            for(int i=n;i>=1;i--)cout<<i<<" "<<1<<endl;
        }
    }
}
int main()
{
    FIO
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
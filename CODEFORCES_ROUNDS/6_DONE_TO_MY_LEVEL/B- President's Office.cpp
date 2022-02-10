#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
void test_case()
{
    ll n,m;
    cin>>n>>m;
    char c;
    cin>>c;
    set<char>s;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==c)
            {
                if(i-1>=0){if(arr[i-1][j]!='.' && arr[i-1][j]!=c)s.insert(arr[i-1][j]);}
                if(i+1<n){if(arr[i+1][j]!='.' && arr[i+1][j]!=c)s.insert(arr[i+1][j]);}
                if(j-1>=0){if(arr[i][j-1]!='.' && arr[i][j-1]!=c)s.insert(arr[i][j-1]);}
                if(j+1<m){if(arr[i][j+1]!='.' && arr[i][j+1]!=c)s.insert(arr[i][j+1]);}
            }
        }
    }
    cout<<s.size();
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
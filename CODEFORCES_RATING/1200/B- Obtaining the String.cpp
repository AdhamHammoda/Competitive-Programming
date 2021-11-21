#include<bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void test_case()
{
    ll n;
    string s1,s2;
	cin>>n>>s1>>s2;
	vector<ll> v;
	for(int i=0; i<n; ++i)
	{
	    if(s1[i]==s2[i])continue;
	    ll p=-1;
	    for(int j=i+1;j<n;j++)
        {
            if(s1[j]==s2[i])
            {
                p=j;
                break;
            }
        }
        if(p==-1)
        {
            cout<<-1;
            return;
        }
        for(int j=p-1;j>=i;j--)
        {
            swap(s1[j],s1[j+1]);
            v.push_back(j+1);
        }
	}
	cout<<v.size()<<endl;
	for(auto x:v)cout<<x<<" ";
}
int main()
{
    ll t;
//    cin>>t;
    t=1;
    while(t--)
    {
        test_case();
    }
}
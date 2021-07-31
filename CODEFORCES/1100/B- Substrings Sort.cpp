#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
//hhh
int main()
{
    //FIO
    ll n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
  sort(v.begin(), v.end(), [&] (const string &s, const string &t) {
		return s.size() < t.size();
	});
    bool f=true;
    for(int i=0;i<n-1;i++)
    {
            if(v[i+1].find(v[i])==string::npos)
            {
               cout<<"NO";
               return 0;
            }
    }
        cout<<"YES"<<endl;
        for(auto x:v)cout<<x<<endl;
}
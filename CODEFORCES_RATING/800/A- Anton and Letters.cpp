#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);
#define ll long long int
using namespace std;
/// Implementation , strings
/// 7-2-2021 , 5:24 PM  
void test_case()
{
    string s;
    getline(cin,s);
    set<char>st;
    for(auto x:s)
    {
        if(isalpha(x))st.insert(x);
    }
    cout<<st.size();
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

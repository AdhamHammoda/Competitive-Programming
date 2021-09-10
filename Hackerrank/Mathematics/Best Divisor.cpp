#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    map<long long, set<long long>> m;
    long long mx=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            long long sum=0,m1=i,m2=n/i;
            while(m1>0)
            {
                sum+=m1%10;
                m1/=10;
            }
            mx=max(mx,sum);
            m[sum].insert(i);
            sum=0;
            while(m2>0)
            {
                sum+=m2%10;
                m2/=10;
            }
            mx=max(mx,sum);
            m[sum].insert(n/i);
        }
    }
    cout<<(*m[mx].begin());
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

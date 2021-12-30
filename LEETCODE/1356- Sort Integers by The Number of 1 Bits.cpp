class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> v(arr.size());
        vector<pair<int,int>>tot;
        for(int i=0;i<arr.size();i++)
        {
            tot.push_back({__builtin_popcount(arr[i]),arr[i]});
        }
        sort(tot.begin(),tot.end());
        for(int i=0;i<arr.size();i++)v[i]=tot[i].second;
        return v;
    }
};
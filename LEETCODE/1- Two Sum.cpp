class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++)m[nums[i]].push_back(i);
        for(int i=0;i<nums.size();i++)
        {
            if(m[target-nums[i]].size())
            {
                if(i!=m[target-nums[i]].back())return {i,m[target-nums[i]].back()};
            }
        }
        return {-1,-1};
    }
};
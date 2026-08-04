class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int mini=nums[0];
        int n=nums.size();
        int maxi=nums[n-1];

        map<int,int>mp;
        for(auto it:nums)mp[it]++;

        for(int i=mini;i<=maxi;i++){
            if(mp.find(i)==mp.end())ans.push_back(i);
        }

        return ans;

    }
};
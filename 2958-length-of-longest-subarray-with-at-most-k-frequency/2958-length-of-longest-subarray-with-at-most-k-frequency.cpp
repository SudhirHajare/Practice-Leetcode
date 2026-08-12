class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0,j=0;
        map<int,int>mp;
        int len=0;
        int maxi=0;
        while(j<n){
            mp[nums[j]]++;
            while(mp.find(nums[j])!=mp.end() && mp[nums[j]]>k){
                mp[nums[i]]--;
                if(mp[nums[i]]==0)mp.erase(nums[i]);
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};
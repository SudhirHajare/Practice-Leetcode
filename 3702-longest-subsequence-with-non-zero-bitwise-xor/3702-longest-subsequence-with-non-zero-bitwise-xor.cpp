class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=0;
        int cnt0=0;
        for(auto it:nums)if(it==0)cnt0++;
        for(auto it:nums)ans^=it;
        if(ans!=0)return nums.size();
        else if(ans==0 && cnt0==nums.size())return 0;
        return nums.size()-1;
    }
};
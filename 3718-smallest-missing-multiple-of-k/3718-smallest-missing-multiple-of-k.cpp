class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto it:nums)mp[it]++;
        int p=k;
        while(true){
            if(mp.find(k)==mp.end())break;
            k+=p;
        }
        return k;
    }
};
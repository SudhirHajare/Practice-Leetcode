class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        

        int n=nums.size();

        vector<int>v1(n,0);
        vector<int>v2(n,0);

        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            v1[i] = maxi;
        }
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            v2[i] = mini;
        }

        int ind=-1;
        
        for(int i=0;i<n;i++){
            if((long long)v1[i]-v2[i]<=k)return i;
        }

        return ind;
    }
};
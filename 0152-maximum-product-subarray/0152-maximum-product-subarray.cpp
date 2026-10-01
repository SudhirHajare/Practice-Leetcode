class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int n=nums.size();

        int pre=1;
        int suff=1;

        for(int i=0;i<n;i++){
            pre*=nums[i];
            maxi=max(maxi,pre);
            if(pre==0)pre=1;
        }

        for(int i=n-1;i>=0;i--){
            suff*=nums[i];
            maxi=max(maxi,suff);
            if(suff==0)suff=1;
        }

        return maxi;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prod(nums.size(),1);

        int left=1;
        for(int i=0;i<n;i++){
            prod[i]*=left;
            left*=nums[i];
        }

        int right=1;

        for(int i=n-1;i>=0;i--){
            prod[i]*=right;
            right*=nums[i];
        }

        return prod;
    }
};
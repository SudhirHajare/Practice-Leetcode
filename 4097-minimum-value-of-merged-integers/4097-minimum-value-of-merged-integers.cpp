class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;

        for(int i=0;i<n-1;i+=2){
            int num=nums[i];
            if(nums[i+1]>=1000){
                num*=10000;
                num+=nums[i+1];
            }
            else if(nums[i+1]>=100){
                num*=1000;
                num+=nums[i+1];
            }
            else if(nums[i+1]>=10){ 
                num*=100;
                num+=nums[i+1];
            }
            else{
                num*=10;
                num+=nums[i+1];
            }
            mini=min(mini,num);
        }

        return mini;
    }
};

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int len=1;
        int mini=nums[0];

        int prevLen=1;
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                len++;
                sum+=nums[i];
            }
            else{
                break;
            }
        }
        mini=sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mini){
                mini++;
            }
        }

        return mini;
    }
};
class Solution {
public:
    bool cond(int n,int i){
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n=n/10;
        }
        return sum==i;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(cond(nums[i],i))return i;
        }
        return -1;
    }
};
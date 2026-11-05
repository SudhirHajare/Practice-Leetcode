class Solution {
public:
    int findTheDistanceValue(vector<int>& nums1, vector<int>& nums2, int d) {

        int cnt=0;        
         for(int i=0;i<nums1.size();i++){
            int num=nums1[i];
            bool flag=true;
            for(int j=0;j<nums2.size();j++){
                if(abs(num-nums2[j])<=d){
                    flag=false;
                    break;
                }
            }
            if(flag==true)cnt++;
         }

        return cnt;
    }   
};
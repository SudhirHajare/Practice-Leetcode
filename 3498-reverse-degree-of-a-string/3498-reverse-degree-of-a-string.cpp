class Solution {
public:
    int reverseDegree(string s) {
         int total=0;\
         int cnt=1;
        for(auto it:s){
            total+=(26-(it-'a'))*cnt;
            cnt++;
        }
        return total;
    }
};
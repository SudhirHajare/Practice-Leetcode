class Solution {
public:

    bool isSorted(string s){
        for(int i=1;i<s.length();i++){
            if(s[i-1]>s[i])return false;
        }
        return true;
    }
    int minOperations(string s) {
        vector<int>v;
        for(auto it:s)v.push_back(it-'a');
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto it:v){
            maxi=max(maxi,it);
            mini=min(mini,it);
        }
        int n=v.size();
        if(isSorted(s))return 0;
        else if(n==2)return -1;
        else if(v[0]==mini || v[n-1]==maxi)return 1;
        for (int i = 1; i < n - 1; i++) {
            if (s[i]-'a' == maxi || s[i]-'a' == mini) {
                return 2;
            }
        }
        return 3;
    }
};

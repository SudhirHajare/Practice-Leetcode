class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int len=0;

        int maxi=INT_MIN;

        int i=0,j=0;
        map<char,int>mp;

        while(j<n){
            mp[s[j]]++;
            while(i<j && mp[s[j]]>2){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }

        return maxi;
    }
};
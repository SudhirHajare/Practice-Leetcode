class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";

        int cnt=0;
        for(auto it:s){
            if(it=='(' &&  cnt==0 )cnt++;
            else if(it=='('){
                ans+='(';
                cnt++;
            }
            else{
                cnt--;
                if(cnt!=0)
                    ans+=')';
            }
        }

        return ans;
    }
};
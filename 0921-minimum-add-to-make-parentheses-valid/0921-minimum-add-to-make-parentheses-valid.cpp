class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int n=s.length();

        stack<char>st;

        int cnt=0;

        for(int i=0;i<n;i++){
            if(s[i]=='(')st.push(s[i]);
            else{
                if(st.size()!=0)st.pop();
                else cnt++;
            }
        }
        
        if(st.size()==0)return cnt;
        return st.size()+cnt;
    }
};
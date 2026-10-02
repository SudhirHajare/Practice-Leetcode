class Solution {
public: 
    bool isValid(string s){
        stack<char>st;
        for(auto it:s){
            if(it=='(')st.push(it);
            else{
                if(st.empty())return false;
                else
                st.pop();
            }
        }
        if(st.empty())return true;
        return false;
    }
    void generate(int n,vector<string>&v,int i,string s){
        if(i>=2*n){
            if(isValid(s)==true)
             v.push_back(s);
            return;
        }
        //left
        s+="(";
        generate(n,v,i+1,s);
        s.pop_back();
        //right
        s+=")";
        generate(n,v,i+1,s);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        generate(n,v,0,"");
        return v;
    }
};
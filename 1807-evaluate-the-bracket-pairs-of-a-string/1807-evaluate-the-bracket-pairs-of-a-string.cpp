class Solution {
public:
    string evaluate(string s, vector<vector<string>>& know) {
        map<string,string>mp;
        for(int i=0;i<know.size();i++){
            mp[know[i][0]]=know[i][1];
        }

        string ans="";
        string bck="";
        bool start=false;

        for(int i=0;i<s.length();i++){
            if(s[i]!='(' && s[i]!=')' && start==false){
                ans+=s[i];
            }
            else {
                if(s[i]=='('){
                    start=true;
                }
                else if(s[i]==')'){
                    if(mp.find(bck)!=mp.end())
                        ans+=mp[bck];
                    else 
                        ans+="?";
                    bck="";
                    start=false;
                }
                else 
                bck+=s[i];
    
            }
        }

        return ans;
    }
};
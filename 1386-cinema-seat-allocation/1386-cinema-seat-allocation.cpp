class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
  
        map<int,vector<int>>mp;
        for(auto it:rs){
            int row=it[0];
            int seat=it[1];
            
            if((seat>=2 && seat<=5)){
                mp[row].push_back(1);
            }
            if((seat>=4 && seat<=7)){
                mp[row].push_back(2);
            }
            if((seat>=6 && seat<=9 )){
                mp[row].push_back(3);
            }
        }

        int cnt=0;
        for(auto it:mp){
                auto p1=find(it.second.begin(),it.second.end(),1);
                auto p2=find(it.second.begin(),it.second.end(),2);
                auto p3=find(it.second.begin(),it.second.end(),3); 
                bool f1=false,f2=false,f3=false;
                if(p1==it.second.end()){
                    cnt++;
                    f1=true;
                }
                if(p2==it.second.end() && f1==false){
                    cnt++;
                    f2=true;
                }
                if(p3==it.second.end() && f2==false){
                    cnt++;
                }
        }

        for(int i=0;i<n-mp.size();i++){
            cnt+=(2);
        }

        return cnt;
    }
};


// 1 2 3 4 5 6 7 0 9 10
// 0 2 3 4 5 0 7 8 9 10
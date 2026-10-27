class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<int>>v(m,vector<int>(n,-1));

        for(int i=0;i<n;i++)v[0][i]=1;
        for(int i=1;i<m;i++)v[i][n-1]=1;

        vector<string>ans;
         for(int i=0;i<m;i++){
            string s="";
            for(int j=0;j<n;j++){
                if(v[i][j]==1){
                    s+='.';;
                }
                else {
                    s+='#';
                }
            }
            ans.push_back(s);
         }
        return ans;
        
    }
};
class Solution {
public:
    int n,m;
    vector<vector<int>>dir={{0,-1},{0,1},{-1,0},{1,0}};
    
    long long dfs(vector<vector<int>>&grid,int i,int j){
        long long sum=0;
        sum+=grid[i][j];
        grid[i][j]=0;
        for(vector<int>&it:dir){
            int i_=i+it[0];
            int j_=j+it[1];
            if(i_>=0 && i_<n && j_>=0 && j_<m && grid[i_][j_]>0){
                sum+=dfs(grid,i_,j_);
            }
        }
        return sum;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        n=grid.size();
        m=grid[0].size();

        int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long sum=0;
                if(grid[i][j]>0){
                    sum+=dfs(grid,i,j);
                }
                if(sum%k==0 && sum>0)count++;
            }
        }

        return count;
    }
};
class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<INT_MAX;i++){
            int mul=1;
            int k=i;
            while(k!=0){
                mul*=k%10;
                k=k/10;
            }
            if(mul%t==0)return i;
        }
        return -1;
    }
};
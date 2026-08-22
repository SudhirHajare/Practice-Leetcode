class Solution {
public:
    bool checkDivisibility(int n) {
        int mul=1;
        int sum=0;

        int val=n;

        while(val!=0){
            mul*=val%10;
            sum+=val%10;
            val/=10;
        }

        return n%(sum+mul)==0;
    }
};
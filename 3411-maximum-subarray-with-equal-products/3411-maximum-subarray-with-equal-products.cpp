class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxLength = 0;

        for (int i = 0; i < n; ++i) {
            long long prod = nums[i];
            int gcdVal = nums[i];
            long long lcmVal = nums[i];

            for (int j = i; j < n; ++j) {
                if (j > i) {
                    gcdVal = std::gcd(gcdVal, nums[j]);

                    
                    long long tempLcm = lcmVal / std::gcd(lcmVal, nums[j]);
                    if (tempLcm > std::numeric_limits<long long>::max() / nums[j]) {
                        break; 
                    }
                    lcmVal = tempLcm * nums[j];

                    
                    if (prod > std::numeric_limits<long long>::max() / nums[j]) {
                        break; 
                    }
                    prod *= nums[j];
                }


                if (prod == gcdVal * lcmVal) {
                    maxLength = std::max(maxLength, j - i + 1);
                }
            }
        }

        return maxLength;
    
    }
};
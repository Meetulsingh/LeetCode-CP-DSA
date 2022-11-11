#include <limits.h>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int pre = INT_MIN;
        int first = 0;
        
        for(int i=0;i<nums.size();i++){
            if(pre != nums[i]){
                nums[first] = nums[i];
                count++;
                first++;
                pre = nums[i];
            }
            
        }
        return count;
    }
};

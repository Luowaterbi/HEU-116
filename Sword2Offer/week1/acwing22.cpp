class Solution {
public:
    int findMin(vector<int>& nums){
        if(nums.empty()) return -1;//如果为空返回-1 
        if(nums.size()==1) return nums[0];//如果长度为1返回唯一的值 
        for(int i=0;i<nums.size()-1;i++){//否则找到第一个比前一个数小的值，返回他 
            if(nums[i]>nums[i+1]) return nums[i+1];
        }
    }
};

class Solution {
public:
    int findMin(vector<int>& nums){
        if(nums.empty()) return -1;//���Ϊ�շ���-1 
        if(nums.size()==1) return nums[0];//�������Ϊ1����Ψһ��ֵ 
        for(int i=0;i<nums.size()-1;i++){//�����ҵ���һ����ǰһ����С��ֵ�������� 
            if(nums[i]>nums[i+1]) return nums[i+1];
        }
    }
};

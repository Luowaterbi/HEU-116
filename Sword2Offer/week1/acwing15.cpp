class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        for(int i=0;i<array.size();i++)
            for(int j=0;j<array[i].size();j++)//套两层循环 
                if(array[i][j]==target) return true;//找到就输出true 
        return false;//没找到就输出false 
    }
};

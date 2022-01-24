class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param numbers int整型vector 
     * @return int整型
     */
    int duplicate(vector<int>& numbers) {
        // write code here
        set<int> s;
        for(int i=0;i<numbers.size();i++){//遍历数组 
            if(s.count(numbers[i])>0) return numbers[i];//set中如果已经有这个数了就重复了 
            else s.insert(numbers[i]);//否则将这个数加入set 
        }
        return -1;//没重复就输出-1 
    }
};

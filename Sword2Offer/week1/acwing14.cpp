class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * 
     * @param numbers int����vector 
     * @return int����
     */
    int duplicate(vector<int>& numbers) {
        // write code here
        set<int> s;
        for(int i=0;i<numbers.size();i++){//�������� 
            if(s.count(numbers[i])>0) return numbers[i];//set������Ѿ���������˾��ظ��� 
            else s.insert(numbers[i]);//�������������set 
        }
        return -1;//û�ظ������-1 
    }
};

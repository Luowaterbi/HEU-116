class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * 
     * @param s string�ַ��� 
     * @return string�ַ���
     */
    string replaceSpace(string s) {
        // write code here
        int len=s.size();
        for(int i=0;i<len;i++){
            while(s[i]==' '){
                s.erase(i,1);//�ѿո���һ��ɾ�� 
                s.insert(i,"%20");//����%20 
                len+=2;//����+2 
            }
        }
        return s;
    }
};
